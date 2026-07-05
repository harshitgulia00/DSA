class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();
        int MOD = 1000000007;
        int NEG = -1000000000;

        vector<vector<int>> score(n, vector<int>(n, NEG));
        vector<vector<int>> ways(n, vector<int>(n, 0));

        score[n-1][n-1] = 0;
        ways[n-1][n-1] = 1;

        for(int i = n-1;i >= 0;i--){
            for(int j = n-1; j >= 0;j--){
                if(board[i][j] == 'X'){
                    continue;
                }
                if(board[i][j] == 'S'){
                    continue;
                }

                int bestScore = NEG;
                int totalWays = 0;
                if(i+1 < n && score[i+1][j] != NEG){
                    bestScore = max(bestScore, score[i+1][j]);
                    totalWays += ways[i+1][j];
                }
                if(j+1 < n && score[i][j+1] != NEG){
                    bestScore = max(bestScore, score[i][j+1]);
                    totalWays += ways[i][j+1];
                }
                if(bestScore == )
                if(i+1 < n && j+1 < n && score[i+1][j+1] != NEG){
                    bestScore = max(bestScore, score[i+1][j+1]);
                    totalWays += ways[i+1][j+1];
                }
                if(bestScore == NEG){
                    continue;
                }
                score[i][j] = bestScore;
                ways[i][j] = totalWays % MOD;
            }
        }
    if(score[0][0] == NEG){
            return {0, 0};
        }
        return {score[0][0], ways[0][0]};
    }
}