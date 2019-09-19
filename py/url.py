from urllib.request import urlopen
import time

def start():
    archivo = open("links.txt", "r")
    for linea in archivo.readlines():
        get(linea)
        
    archivo.close()
def get(linea):
    html = urlopen(linea).read()
    string_html=str(html)
    pos_poster=string_html.find('<div class="poster">')
    string_section=string_html[pos_poster:pos_poster+400]
    url=string_section[string_section.find('https://m.media-amazon.com/images/'):(string_section.find('.jpg')+4)]
    print(url)

