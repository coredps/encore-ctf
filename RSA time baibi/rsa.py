from Crypto.Util import number
from Crypto.PublicKey import RSA
from Crypto.Util.number import *

def encrypt(message):
	m = int(message.encode('hex'),16)
	return pow(m,e,n)
def decrypt(message):
	try:
		message = int(message)
	except:
		return "invalid input"
	if message == ciphertext:
		return "r/wooosh copy and pasting same thing here"
	return pow(message,d,n)

p = number.getPrime(1024)
q = number.getPrime(1024)
if p==q:
	print "Well that's rare please try again later"
	exit()
n = p*q
e = 65537
phin = (p-1)*(q-1)
d = inverse(e,phin)
flag = 'enc0re{W377cOmE_t0_RSA_b4Ib1}'
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

