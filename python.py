# author: Bryce Meizen
# today: 6/14/2021 

def printHelloWorld():
    print("Hello World!\n")

def printLoop():
    for i in range(11):
        if i % 2 == 0:
           print(i)

if __name__ == "__main__":
    printHelloWorld()
    printLoop()