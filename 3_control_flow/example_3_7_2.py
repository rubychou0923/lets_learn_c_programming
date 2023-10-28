import sys

def main():
    i=400
    j=0
    for i in range(410):
        for j in range(5):
            print("second i:",i," j:",j," i+j", i+j)
            if((i+j)==404):
                print("!!! 404 !!!")
                break
        i=i+100
        print("1st for,i:", i, " j:",j ," i+j:", i+j)


if __name__ == "__main__":
    main()
