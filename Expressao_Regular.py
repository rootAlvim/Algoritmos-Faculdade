'''Enunciado: Escreva uma função em Python que utilize regex para validar se uma string é um endereço de email válido. Um email válido deve seguir o formato
nome@dominio.com .'''
import re
def email(x):
    if re.findall(r'^[a-zA-Z0-9._-]+@[a-zA-Z0-9._-]+\.[a-zA-Z]{2,}$',x):
        print('Valido')
    else:
        print('Invalido')
a = 'exemplo@dominio.com'
email(a)

"""-----------------------------------------------------------------------------------------------------------------------------------------------------"""
'''Enunciado: Crie uma função que extraia todos os números de telefone de um texto. Um número de telefone é definido como uma sequência de 9 dígitos, podendo ou
não estar separados por espaços ou hífens.'''

def extrair_telefones(texto):
    reg = r'\b\d{1,3}[ |-]?\d{2,3}[ |-]?\d{3}\b'
    return re.findall(reg, texto)
texto = "Contate-nos no 123-456-789 ou 987 654 321."
print(extrair_telefones(texto))
"""-----------------------------------------------------------------------------------------------------------------------------------------------------"""
'''Enunciado: Escreva uma função que substitua todas as URLs em um texto por "[LINK]". Considere URLs no formato http://www.exemplo.com ou
https://exemplo.com.br .'''
def url(x):
    reg = r'https?://\S+'
    return re.sub(reg,'[LINK]',x)
    
z = 'siga o link: https://github.com/rootAlvim'
print(url(z)) #Saida esperada siga o link: [LINK]