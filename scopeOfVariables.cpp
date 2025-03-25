import random

    def main() :SECRET_NUMBER = random.randint(0, 100)
                                                   attempts = 0

        while True: try :user_guess = int(input("Enter a number between 0 and 100: "))
        except ValueError:print("Invalid input. Please enter an integer.") continue #Go back to the beginning of the loop

        attempts += 1

    if user_guess == SECRET_NUMBER:print(f "Correct! You guessed the number in {attempts} attempts.") break #Exit the loop when the guess is correct elif user_guess < SECRET_NUMBER:
        print("Too low. Try again.")
    else:
        print("Too high. Try again.")

if __name__ == "__main__":
    main()