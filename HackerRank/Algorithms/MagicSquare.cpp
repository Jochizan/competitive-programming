#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    vector<int> cost = {0,0,0,0,0,0,0,0};
    vector<vector<int>> t = 
    {
        {4,9,2,3,5,7,8,1,6},
        {4,3,8,9,5,1,2,7,6},
        {2,9,4,7,5,3,6,1,8},
        {2,7,6,9,5,1,4,3,8},
        {8,1,6,3,5,7,4,9,2},
        {8,3,4,1,5,9,6,7,2},
        {6,7,2,1,5,9,8,3,4},
        {6,1,8,7,5,3,2,9,4},
    };
    int s[3][3];
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            cin >> s[i][j];
    for(int i=0; i<8; i++) {        
        cost[i] = abs(t[i][0]-s[0][0]) + abs(t[i][1]-s[0][1]) + abs(t[i][2]-s[0][2]);
        cost[i] = cost[i] + abs(t[i][3]-s[1][0]) + abs(t[i][4]-s[1][1]) + abs(t[i][5]-s[1][2]);
        cost[i] = cost[i] + abs(t[i][6]-s[2][0]) + abs(t[i][7]-s[2][1]) + abs(t[i][8]-s[2][2]);
    }   
    sort(cost.begin(), cost.end());
    cout << cost[0] << endl;
    return 0;
}//Esta pregunta es casi imposible sino tenemos en cuenta los 8 cuadrados mágicos que existen.
int magic_mat[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
};

int A[3][3];
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
        scanf("%d", &A[i][j]);
}

int min_cost = 81;
for (int k = 0; k < 8; k++) {
    int crt_cost = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            crt_cost += abs( A[i][j] - magic_mat[k][i][j] );
    }
    if (crt_cost < min_cost)
        min_cost = crt_cost;
}

printf("%d", min_cost);
