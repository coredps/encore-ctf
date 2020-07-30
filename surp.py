from PIL import Image
import pytesseract
from unidecode import unidecode

pytesseract.pytesseract.tesseract_cmd = r"C:\Program Files (x86)\Tesseract-OCR\tesseract.exe"
img = Image.open("surprise2.png")

newimdata = []
for color in img.getdata():
    if abs(color[0]-22) <=15 and abs(color[1]-238) <=15 and abs(color[2]-238) <= 15:
        newimdata += [(255,255,255)]
    else:
        newimdata += [color]
new = Image.new(img.mode,img.size)
new.putdata(newimdata)
new.save("new.png")
a = Image.open("new.png")
text = pytesseract.image_to_string(a)
text = unidecode(text)
with open("aae.txt","w") as f:
    f.write(text)
