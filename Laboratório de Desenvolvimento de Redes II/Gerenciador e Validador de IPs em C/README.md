
# Gerenciador e Validador de IPs em C

## Descrição

Este programa em C permite ao usuário **criar um arquivo de IPs** (um por linha) e, depois, **validar a classe de cada IP** (Classe A, B, C ou Desconhecida).  
O programa é totalmente interativo, rodando no terminal, e utiliza apenas bibliotecas padrão do C.

---

## Funcionalidades

- **Menu interativo:** Escolha facilmente entre criar um arquivo de IPs, validar os IPs ou sair do programa.
- **Criação de arquivo:**
  - Se já existe um arquivo, você pode escolher entre sobrescrever (criar novo arquivo) ou apenas adicionar novos IPs ao final.
  - O programa mostra qual linha você está preenchendo.
- **Validação de classe de IP:** Lê o arquivo e indica a classe (A, B, C ou Desconhecida) de cada IP, linha a linha.

---

## Como usar

### 1. Compilar

Salve o código principal em um arquivo, por exemplo, `ip_manager.c`.

Depois, abra o terminal e digite:
```bash
gcc ip_manager.c -o ip_manager
```

### 2. Executar

No terminal, digite:
```bash
./ip_manager
```
(No Windows, use `ip_manager.exe`)

---

## Fluxo do Programa

1. **Menu inicial:**
    ```
    === MENU ===
    1. Criar arquivo de IPs
    2. Validador de classe IP
    0. Sair
    Escolha:
    ```

2. **Criar arquivo de IPs:**
    - Se já houver IPs salvos:
      ```
      Já existem X IP(s) no arquivo ips.txt.
      1. Criar novo arquivo (APAGA todos os IPs anteriores)
      2. Incluir novos IPs ao final do arquivo
      Escolha:
      ```
    - Para cada IP digitado, mostra o número da linha:
      ```
      Linha 1 - Digite um IP:
      1. Incluir outro IP
      2. Salvar e voltar ao menu
      Escolha:
      ```

3. **Validador de classe IP:**
    - Mostra o número da linha, o IP e sua classe:
      ```
      1. 192.168.0.1    -> Classe C
      2. 10.0.0.1       -> Classe A
      3. texto_invalido -> Desconhecida
      ```

---

## Observações

- O arquivo de IPs sempre se chama `ips.txt` e fica na mesma pasta do programa.
- O programa não faz validação detalhada do formato do IP, apenas verifica o primeiro número para identificar a classe.
- Para remover todos os IPs, basta escolher a opção de "Criar novo arquivo" quando solicitado.
- O programa funciona em Windows, Linux e Mac (pode haver pequenas diferenças na limpeza da tela).
