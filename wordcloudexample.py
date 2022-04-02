from PIL import Image
import wordcloud
import numpy

txt = 'Save The Earth'
image = Image.open('earth.png')
img = numpy.array(image)
x = wordcloud.ImageColorGenerator(img)

wc = wordcloud.WordCloud(
    font_path='FZY4JW.TTF',
    mask = img,
    background_color = 'white',
    repeat = True,
    contour_width = 2,
    contour_color = 'blue',
    color_func = x
)
wc.generate(txt)
wc.to_file('Save.png')

p = Image.open('Save.png')
p.show()
