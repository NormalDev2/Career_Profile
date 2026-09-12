board = ["1", "2", "3",
         "4", "5", "6",
         "7", "8", "9"]

player = 'X'

winning_combinations = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
]
def win_checker():
    for i in winning_combinations:
        if (board[i[0]] == player and board[i[1]] == player and board[i[2]] == player):
            return True
    return False
def draw_checker():
    for i in board:
        if i in ['1','2','3','4','5','6','7','8','9']:
            return False
    return True
        

while True: 
    print(board[0], '\t|', board[1], '\t|', board[2])
    print("------------------------")
    print(board[3], '\t|', board[4], '\t|', board[5])
    print("------------------------")
    print(board[6], '\t|', board[7], '\t|', board[8])

    n = int(input("what position would you like to play in?: "))
    if(board[n-1] == 'O' or board[n-1] == 'X'):
        print("Place already taken!, please use another space")
    else:
        board[n-1] = player
    
    if win_checker():
        print(player, "won!")
        break
    if draw_checker():
        print("Draw")
        break

    if player == 'X':
        player = 'O'
    else: 
        player = 'X'
    

