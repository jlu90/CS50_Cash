from cs50 import get_float
import math

# Prompt user for non-negative input

while True:
    change_owed = get_float('How much change are you owed? ')
    if change_owed > 0.00:
        break

# Convert the input to dollars, cents, and total amount of change owed (in cents)
dollars = change_owed - (change_owed % 1)

cents = int(dollars) * 100

total_change = cents + int((change_owed % 1) * 100)

# Begin calculations for each denomination of coin

coins = 0
remainder = float

if total_change >= 25:
    quarters = math.trunc(total_change/25)
    remainder = total_change % 25
    total_change = remainder
    coins += quarters

if total_change < 25 and total_change >= 10:
    dimes = math.trunc(total_change/10)
    remainder = total_change % 10
    total_change = remainder
    coins += dimes

if total_change < 10 and total_change >= 5:
    nickles = math.trunc(remainder/5)
    remainder = total_change % 5
    total_change = remainder
    coins += nickles

if total_change < 5 and total_change >= 1:
    pennies = total_change
    coins += pennies

print(coins)