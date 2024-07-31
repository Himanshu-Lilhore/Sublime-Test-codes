# !!! don't run in REPL

from timeit import timeit
import time

file1 = open("file1.py")
file2 = open("file2.py")

code1 = file1.read()
code2 = file2.read()

numOfIterations = 100000     # minimum 100
time1 = 0
time2 = 0

inLoop = 100
inLoopItr = (int)(numOfIterations / inLoop)
tempTime1 = 0
tempTime2 = 0
lst = []
startTime = time.time()

for i in range(inLoop):  # Uncomment to test for certain no. of iterations
    # while True:  # Uncomment to test for 10s
    tempTime1 = timeit(code1, number=inLoopItr)
    tempTime2 = timeit(code2, number=inLoopItr)
    lst.append(tempTime1 / tempTime2)
    time1 += tempTime1
    time2 += tempTime2
    if time.time() - startTime > 10:
        break

if time.time() - startTime > 10:
    print("Termination after 10 seconds")
else:
    print(f'For {numOfIterations} runs :')

print("file1 time =", time1)
print("file2 time =", time2)
howManyTimes = 0.0
if time1 < time2:
    howManyTimes = time2 / time1
    print(f'| Code1 is {round(howManyTimes,2)}x faster')
    print(f'|\tMin : {round(1/max(lst),2)}x')
    print(f'|\tAvg : {round(1/(sum(lst)/len(lst)),2)}x')
    print(f'|\tMax : {round(1/min(lst),2)}x')
else:
    howManyTimes = time1 / time2
    print(f'| Code2 is {round(howManyTimes,2)}x faster')
    print(f'|\tMin : {round(min(lst),2)}x')
    print(f'|\tAvg : {round(sum(lst)/len(lst),2)}x')
    print(f'|\tMax : {round(max(lst),2)}x')


# don't run in REPL
