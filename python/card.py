import random as rm
cards = ["jack","queen","king"]

def main():
    #to get single value with replacement
    print(rm.choice(cards))
    
    # to get k values with replacement where k be any number equal and less than element in list
    rm.seed(0)
    print(rm.choices(cards,k=2))
    # choices with giving weight
    print(rm.choices(cards, weights=[100,0,0],k=3))
    
    #to get values without replacement 
    print(rm.sample(cards, k=2))
    
    
    
    
    
main()