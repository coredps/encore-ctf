from Crypto.Util import number
from Crypto.PublicKey import RSA
from Crypto.Util.number import *

def encrypt(message):
	m = int(message.encode('hex'),16)
	return pow(m,e,n)
def ceasar(string, shift):
  cipher = ''
  for char in string:
    if char == ' ':
      cipher = cipher + char
    elif  char.isupper():
      cipher = cipher + chr((ord(char) + shift - 65) % 26 + 65)
    else:
      cipher = cipher + chr((ord(char) + shift - 97) % 26 + 97)
  return cipher

def decrypt(message):
	try:
		message = int(message)
	except:
		return "invalid input"
	if message == ciphertext:
		return "r/woosh copy and pasting same thing here"
	return pow(message,d,n)

p = number.getPrime(1024)
q = number.getPrime(1024)
if p==q:
	print "Well that's rare occurence please try again later"
	exit()
n = p*q
e = 65537
phin = (p-1)*(q-1)
d = inverse(e,phin)
text = 'mcplvtyrcdltdxzdeqfy'
s = 15
flag = ceasar(text, s)
ciphertext = encrypt(flag)
print "Welcome to RSA restraunt."
print "Here is the menu -- " + str(ciphertext)
c = 0
while c != 2:
	c +=1
	print '1)Encrypt'
	print '2)Decrypt'
	print '3)Exit'
	try:
		choice = int(raw_input())
	except:
		print 'invalid input'
		continue
	if choice == 1:
		print 'enter your message : '
		print str(encrypt(raw_input()))
	if choice == 2:
		print 'enter text to decipher: '
		print str(decrypt(raw_input()))
	if choice == 3:
		exit()
