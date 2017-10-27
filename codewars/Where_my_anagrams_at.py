def anagrams(word, words): return [item for item in words if sorted(item)==sorted(word)]
a = anagrams('racer', ['crazer', 'carer', 'racar', 'caers', 'racer'])
print a
