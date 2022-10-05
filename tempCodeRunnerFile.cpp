if(i==j){
                    if(mat[i][j] == 1)
                        chkU = 1;
                    else 
                        chkU = 0;
                }
                else if(i != j){
                    if(mat[i][j] == 0)
                        chkU = 1; 
                    else 
                        chkU = 0;
                }
                else
                    chkU = 0; 