# Given a string, return a new string where the first and last chars have been exchanged.

# front_back('code') → 'eodc'
# front_back('a') → 'a'
# front_back('ab') → 'ba'

# Solution:


def front_back(str):
  # if the string contain 2 letter as AB then change it to BA, else for only 1 letter return the same letter
  if len(str) < 2:
    return str
  return (str[-1:] + str[1:-1] + str[:1])
