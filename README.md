### Light All:-
 
 
This C++ program checks whether it's possible to light up all cells in a string of length N, where each character in the string S is either '1' (has a light) or '0' (no light). A '1' can light itself and either its left or right adjacent cell, but each light can only light one adjacent unlit cell. The function isPossibleToLightAllCells simulates this logic using a boolean array lit to track which cells are lit.

For each '1' in the string, the code first tries to light the left cell (if it's within bounds and unlit). If not possible, it then tries the right cell. If neither is possible, it at least lights itself. After processing all cells, the function checks if every cell is lit — if even one cell is unlit, it returns false. The main function runs this check for multiple test cases and outputs "Yes" or "No" accordingly..
