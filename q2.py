import csv
with open("quiz.csv", newline='') as csvfile:
    function = csv.reader(csvfile, delimiter=',')
    letters = []
    first =[]
    second = []
    third = []
    for row in function:
        for i in range(0, 3):
            if (i == 0):
                first.append(row[1][i])
            elif (i == 1):
                second.append(row[1][i])
            else:
                third.append(row[1][i])
print(len(first))
print(len(second))
print(len(third))
