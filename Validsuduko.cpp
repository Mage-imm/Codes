class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
{
        int z = 0;
        while(z<9)
    {
             for (size_t i = 0; i < board.size(); ++i) 
        {
            for (size_t j = i + 1; j < board.size(); ++j) 
            {
                if(board[i][z] == '.' || board[j][z] == '.' )
                {
                    continue;
                }
                if (board[i][z] == board[j][z]) return false;
            }
        
        }
        z++;
        
    }

    z = 0;
       while(z<9)
    {
             for (size_t i = 0; i < board.size(); ++i) 
        {
            for (size_t j = i + 1; j < board.size(); ++j) 
            {
                if(board[z][i] == '.' || board[z][j] == '.')
                {
                    continue;
                }
                if (board[z][i] == board[z][j]) return false;
            }
        
        }
        z++;
        
    }
    

      for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                int nums[9] = {0};
                
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char num = board[boxRow * 3 + i][boxCol * 3 + j];
                        if (num == '.') continue;

                        int index = num - '1';
                        if (nums[index] == 1) return false;
                        nums[index] = 1;
                    }
                }
            }
        }



        return true;

}

    




};
