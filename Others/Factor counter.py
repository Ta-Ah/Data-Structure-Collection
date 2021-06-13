n = int(input("Enter an integer number "))
count = 1  # n is already a of n (nx1=n) so i counted it a the first
i = 1
while i <= n / 2:
    if n % i == 0:
        print("Factor of ", n, "is ", i)
        count = count + 1
    i = i + 1

print(n, " has total ", count - 1, "factors")
