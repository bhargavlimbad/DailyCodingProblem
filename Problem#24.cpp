// Link - https://www.geeksforgeeks.org/locking-and-unlocking-of-resources-in-the-form-of-n-ary-tree/



Given an n-ary tree of resources arranged hierarchically such that height of tree is O(Log N) where N is total number of nodes (or resources). A process needs to lock a resource node in order to use it. But a node cannot be locked if any of its descendant or ancestor is locked.

Following operations are required for a given resource node:

islock()- returns true if a given node is locked and false if it is not. A node is locked if lock() has successfully executed for the node.
Lock()- locks the given node if possible and updates lock information. Lock is possible only if ancestors and descendants of current node are not locked.
unLock()- unlocks the node and updates information.
How design resource nodes and implement above operations such that following time complexities are achieved.

    islock()  O(1)
    Lock()    O(log N)
    unLock()  O(log N)
We strongly recommend you to minimize your browser and try this yourself first.

It is given that resources need to be stored in the form of n-ary tree. Now the question is, how to augment the tree to achieve above complexity bounds.




Method 1 (Simple)

A Simple Solution is to store a boolean variable isLocked with every resource node. The boolean variable isLocked is true if current node is locked, else false.
Let us see how operations work using this Approach.

isLock(): Check isLocked of the given node.
Lock(): If isLocked is set, then the node cannot be locked. Else check all descendants and ancestors of the node and if any of them is locked, then also this node cannot be locked. If none of the above conditions is true, then lock this node by setting isLocked as true.
unLock(): If isLocked of given node is false, nothing to do. Else set isLocked as false.
Time Complexities:

isLock()  O(1)
Lock()    O(N)
unLock()  O(1)

Lock is O(N) because there can be O(N) descendants.


Method 2 (Time Complexities according to question)

The idea is to augment tree with following three fields:
A boolean field isLocked (same as above method).
Parent-Pointer to access all ancestors in O(Log n) time.
Count-of-locked-descendants. Note that a node can be ancestor of many descendants. We can check if any of the descendants is locked using this count.
Let us see how operations work using this Approach.

isLock(): Check isLocked of the given node.
Lock(): Traverse all ancestors. If none of the ancestors is locked, Count-of-locked-descendants is 0 and isLocked is false, set isLocked of current node as true. And increment Count-of-locked-descendants for all ancestors. Time complexity is O(Log N) as there can be at most O(Log N) ancestors.
unLock(): Traverse all ancestors and decrease Count-of-locked-descendants for all ancestors. Set isLocked of current node as false. Time complexity is O(Log N)
Thanks to Utkarsh Trivedi for suggesting this approach.

This article is contributed by Abhay Rathi. Please write comments if you find anything incorrect, or you want to share more information about the topic discussed above
