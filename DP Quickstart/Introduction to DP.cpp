                                                                DYNAMIC PROGRAMMING

                                             " Those who cannot remember their past are condemned to repeat it "

	• Suppose we need to compute the sum 1+1+1+1+1 = 5 
	
	• Suppose for another problem we need to compute 1+1+1+1+1+1 = 6 .
	So, to compute this sum just add 1 to previous sum i.e. learned from past i.e. sum(6) = sum(5) + 1
	
	• DP is all about remembering the problems that we have already solved in the past and it is all about logical  thinking

	• Where to apply DP
	          --->  1) optimal substructure    -- refer above example
	          --->  2) overlapping subproblem -- calculate fib(5) and we know f(n) = f(n-1) + f(n-2)
	                                                                        In order to this we need, 
	
	                                                           
	                   fib(5)   
                     /                \
               fib(4)                fib(3)   
             /        \              /       \ 
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)
	
	If you look at this problem, it has both optimal substructure as well as overlapping sub problem
	Using DP, we can solve it like
	
	                                                        5                             Top down DP,
	                                                 3 /         \2 
	                                                4             3                           0     1      1    2      3     5        
	                                           2 /     \1                         Array index 0     1      2    3      4     5
	                                          3        2
	                                     1 /   \ 1
	                                      2     1
	                                  1/   \0
	                                 1       0
	
	This approach is called top down approach. The other approach could be bottom down approach.
	 
	                       Top Down = Recursion + Memoisation
	
	
	    
	In bottom up approach, we will start with the smallest sub problem dp[i] = dp[i-1]+dp[i-2]
	
	                                         0          1        1        2         3         5
	
	                 Array index:            0           1       2        3         4          5
	
	
	                                        ---------------------------------------------------------------->
	
	                                       start with smallest                            end with biggest
                        

	
	                          



















