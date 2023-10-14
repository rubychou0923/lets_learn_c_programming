import sys

def main():
    i=int(sys.argv[1])
    j=int(sys.argv[2])

    if(i==j):
        print("i==j\n")
    else:
        print("i!=j\n")

    #python does not like c
    if(i==j):
        print("i==j\n")
    else:
        print("enter else condition\n")
        print("i!=j\n")

    print("======= while ===========\n")
    while(i<100):
        print("i:",i)
        i=i+1	

    print("======= for ===========\n")
    i=0
    for i in range(100):
        print("i:",100-i)


if __name__ == "__main__":
    main()
