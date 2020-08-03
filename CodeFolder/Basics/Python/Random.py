import random
# Initialize the random number generator.
random.seed(None)
# Returns a random integer N such that a <= N <= b
random.randint(a, b)
# Returns a random integer N such that 0 <= N < b
random.randrange(b)
# Returns a random integer N such that a <= N < b
random.randrange(a, b)
# Returns an integer N with k random bits.
random.getrandbits(k)
# Shuffles a list
random.shuffle(li)