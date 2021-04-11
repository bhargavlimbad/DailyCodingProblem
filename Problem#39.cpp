
// C++ implementation of
// the above approach

#include<bits/stdc++.h>
using namespace std;

class GameOfLife {
public:
	// Function to display the grid
	void print(vector<vector > grid);

	// Function to check if
	// index are not out of grid
	bool save(vector<vector > grid,
			int row, int col);

	// Function to get New Generation
	void solve(vector<vector >& grid);
};

void GameOfLife::print(
	vector<vector > grid)
{
	int p = grid.size(),
		q = grid[0].size();

	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {

			cout << grid[i][j];
		}
		cout << endl;
	}
}

bool GameOfLife::save(
	vector<vector > grid,
	int row, int col)
{
	return (grid.size() > row
			&& grid[0].size() > col
			&& row >= 0
			&& col >= 0);
}

// Possible neighboring indexes
int u[] = { 1, -1, 0, 1, -1, 0, 1, -1 };
int v[] = { 0, 0, -1, -1, -1, 1, 1, 1 };

void GameOfLife::solve(
	vector<vector >& grid)
{
	int p = grid.size(),
		q = grid[0].size();

	for (int i = 0; i < p; i++) {
		for (int j = 0; j
