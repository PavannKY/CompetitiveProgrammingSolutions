from fractions import Fraction

'''
def simplify(num,den):
    a = num
    b = den
    
    for i in range(1,min(a,b)+1):
        if a%i==0 and b%i==0:
            x = i
    
    num = num/x
    den = den/x
    
    return int(num),int(den)
'''

def addFraction(num1, den1, num2, den2):
    
    denx = den1 * den2
    numx = (num1*den2) + (num2*den1)

    ans = Fraction(numx,denx)    

    print(ans)