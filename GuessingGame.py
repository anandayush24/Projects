import random as rn 
correct_number = rn.randrange(1,20,1)

def check_wrong(input_number, correct_number, count):
    if(input_number > correct_number):
        print("Wrong guess, please guess lower")
        print("{} chances remaining".format(4-count))
        if(4 - count == 0):
            print("You ran out of guesses. Try again later.")
    elif(input_number < correct_number):
        print("Wrong guess, please guess higher")
        print("{} chances remaining".format(4-count))
        if(4 - count == 0):
            print("You ran out of guesses. Try again later.")
count = 0

while(count<4):
    input_number = int(input("Please enter your guess upto 20: "))

    if(input_number == correct_number):
        print("You've guessed correct number")
        break
    else:
        count = count + 1
        check_wrong(input_number, correct_number, count)
        
print("The correct answer:{}".format(correct_number))