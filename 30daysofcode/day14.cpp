class Difference:
    def __init__(self, a):
        self.__elements = a

	# Add your code here
    def computeDifference(self):
        self.maximumDifference=0
        max1=0
        min1=100
        for i in self.__elements:
            if i<min1:
                min1=i
            if i>max1:
                max1=i

        self.maximumDifference=max1-min1            

# End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)
