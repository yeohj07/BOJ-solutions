import hashlib

s1 = input()

s2 = hashlib.sha224(s1.encode("utf-8")).hexdigest()

print(s2)
