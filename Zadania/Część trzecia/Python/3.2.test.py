import random

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
    outcomes.remove(floor(guess_1 / secret_number))
    outcomes.remove(floor(guess_2 / secret_number))
    return outcomes

def determine_winner(outcomes):
    if outcomes == [0, 0]:
        return "Tie"12
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
    display_stars(secret_number)
    print()
    print("P1: ", end="")
    display_stars(guess_1)
    print()
    print("P2: ", end="")
    display_stars(guess_2)
    print()

    # Evaluate round's outcome
    outcomes = check_guesses(secret_number, guess_1, guess_2)

    # Display commentaries and winner
    print("Player 1:")
    for outcome in outcomes:
        print(f"{get_comment(outcome)}")
    print("Player 2:")
    for outcome in outcomes:
        print(f"{get_comment(outcome)}")
    print(f"Winner: {determine_winner(outcomes)}")

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