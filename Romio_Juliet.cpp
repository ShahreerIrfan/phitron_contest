#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool canReunite(int N, int E, vector<vector<int>> &adjList, int X, int Y, int K) {
    vector<int> distX(N, -1);
    vector<int> distY(N, -1);

    queue<int> qX;
    qX.push(X);
    distX[X] = 0;

    queue<int> qY;
    qY.push(Y);
    distY[Y] = 0;

    while (!qX.empty() || !qY.empty()) {
        if (!qX.empty()) {
            int u = qX.front();
            qX.pop();
            for (int v : adjList[u]) {
                if (distX[v] == -1) {
                    distX[v] = distX[u] + 1;
                    qX.push(v);
                }
            }
        }

        if (!qY.empty()) {
            int u = qY.front();
            qY.pop();
            for (int v : adjList[u]) {
                if (distY[v] == -1) {
                    distY[v] = distY[u] + 1;
                    qY.push(v);
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (distX[i] != -1 && distY[i] != -1 && max(distX[i], distY[i]) <= K) {
            return true;
        }
    }

    return false;
}

int main()
{
    int N, E;
    cin >> N >> E;
    vector<vector<int>> adjList(N);
    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;
        adjList[A].push_back(B);
        adjList[B].push_back(A);
    }
    int X, Y, K;
    cin >> X >> Y >> K;

    if (canReunite(N, E, adjList, X, Y, K))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}