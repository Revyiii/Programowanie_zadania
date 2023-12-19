import random
import math

def get_user_input(player_num, max_value):
    while True:
        try:
            guess = int(input(f"Player {player_num}: Enter a number between 1 and {max_value}: "))
            if guess < 1 or guess > max_value:
                raise ValueError("Please enter a valid number within the specified range.")
            return guess
        except ValueError:
            print("Invalid input. Please try again.")

def display_stars(number):
    for _ in range(number):
        print("*", end="")
    print()

def check_guesses(secret_number, guess_1, guess_2):
    outcomes = [0, 1, 2, 3]
    if int(guess_2 / secret_number) in range(4):
        outcomes.remove(int(guess_2 / secret_number))
        outcomes.remove(int(guess_1 / secret_number))
    else:
        # Handle the case where guess_2 / secret_number is not an integer
        pass
    return outcomes

def determine_winner(outcomes):
    if outcomes == [0, 0]:
        return "Tie"
    elif outcomes[0] == 0:
        return "Player 1"
    elif outcomes[1] == 0:
        return "Player 2"
    else:
        return "None"

def play_round():
    # Generate secret number
    secret_number = random.randint(1, 50)

    # Get player guesses
    guess_1 = get_user_input(1, 50)
    guess_2 = get_user_input(2, 50)

    # Display game state
    print("Secret number:", end="")
    for _ in range(secret_number):
        print("*", end="")
    print()
    print("P1:", end="")
    for _ in range(guess_1):
        print("*", end="")
    print("P2:", end="")
    for _ in range(guess_2):
        print("*", end="")
    print()

    # Move the cursor to display commentaries
    y = 4
    print()
    for outcome in check_guesses(secret_number, guess_1, guess_2):
        print(f"Player 1: {get_comment(outcome)}", end="")
        for _ in range(y):
            print("\n", end="")
        print()
        y += 1

    # Move the cursor to display the winner
    print("\nWinner:", end="")
    print(determine_winner(check_guesses(secret_number, guess_1, guess_2)), end="")

def get_comment(outcome):
    comments = {0: "Excellent!", 1: "Good guess!", 2: "Too low!", 3: "Too high!"}
    return comments[outcome]

def main():
    print("Welcome to the Guessing Game!")

    while True:
        play_round()

        # Check if the user wants to continue
        choice = input("Play again? (Y/N): ").upper()
        if choice != "Y":
            break

        # Clear the score
        print("Score:")
        print("Player 1: 0")
        print("Player 2: 0")

    print("Thanks for playing!")

if __name__ == "__main__":
    main()