from fractions import Fraction

x = [4, 3]
y = [5, 4]
z = [4, 4]

# The probabilities of pulling red form each urn
xr = x[0] / sum(x)
yr = y[0] / sum(y)
zr = z[0] / sum(z)

p = (xr * yr * (1 - zr)) + (xr * (1 - yr) * zr) + ((1 - xr) * yr * zr)
p_frac = Fraction(p).limit_denominator() # Fraction form

print(f"The probability of drawing 2 reds and one black is {p}, or {p_frac}.")