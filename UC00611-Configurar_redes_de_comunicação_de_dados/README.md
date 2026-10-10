# introdução

qualquer software que estão a espera de requisição é um servidor.

conexões são feitas através de cabos, wifi, satélites. um deles é o cabo utp (cabo tradicional com fios de cobre,  distancia máxima para não haver perdas de velocidade e pacotes é 100m max.

IPV4 vs IPV6

**são as duas versões principais do Protocolo de Internet (IP), o sistema de endereçamento numérico usado para identificar dispositivos conectados a uma rede**.

IPV4 = menos bits mais limitado e mais previsível, por saber que tem IP privados e públicos,  e ainda ip’s que são  reservados para determinados usos. formado por números de 0 a 255 separados por ponto (.);

IPV6 = mais bits, alfanuméricos hexadecimais separados por 2 pontos (:), suporta uma quantidade quase infinita de endereços de redes. 

# Componentes de uma rede - PDF 2

## Host

todos os aparelhos conectados em uma rede é um host, podendo eles serem nomeados como dispositivos finais, servidores, clientes, celulares, desde que tenham um IP

## IP

Internet Protocol, um endereço numérico que identifica o host que está conectado à rede.
para descobrir um IP em uma rede (Windows) é abrir o terminal (pronpt de comandos e digitar “ifconfig”. o IPV4 é o seu IP

## Servidores

são computadores com software que lhe permite fornecer informações, como email. paginas da web para outros dispositivos finais da rede. exemplos de servidores: 

Email = outlook / web = chrome / arquivo = windowns explore

> qualquer software que está a espera de requisição é um servidor.
> 

---

Os clientes tem software para solicitar e exibir informações obtidas do servidor.

!imagem.png

um único computador pode executar vários tipos de software cliente. Por exemplo, o utilizador pode verificar o email, enquanto visualiza uma pagina da web, e escuta musicas no Spotfy.

## Ponto a ponto

o software cliente e o servidor geralmente são executados em computadores diferentes, mas também é possível que um computador seja utilizado para ambas as funções ao mesmo tempo.
Em pequenas empresas e em nossa casa, vários computadores funcionam como servidores e clientes na rede. Esse tipo de rede é chamado de rede ponto a ponto.
Um exemplo clássico de uma **rede P2P (Peer-to-Peer)** é:

- **BitTorrent** – os computadores (peers) partilham ficheiros diretamente entre si. Cada computador pode **enviar e receber** partes do ficheiro, sem depender de um servidor central.

Exemplo simples para a prova

Imagine uma sala de informática com 4 computadores ligados em rede.

- O **PC1** tem um ficheiro chamado `Trabalho.pdf`.
- O **PC2** precisa desse ficheiro.
- Em vez de pedir a um servidor, o **PC2** recebe o ficheiro **diretamente do PC1**.

Neste caso:

- Não existe um servidor central.
- Todos os computadores podem atuar como **cliente e servidor** ao mesmo tempo.

### administração centralizada

É a 42 por exemplo, onde todos os computadores estão ligados a um servidor, e remotamente ou não, consegue se ter acesso e configurar, não apenas um, mas vários Pcs ao mesmo tempo, pois são geridos por um servidor. então se houver 50 computadores, não é necessário ir de um a um, apenas coloca-se as regras no servidor e “espalha” pela rede

### windows server

É um sistema operativo desenvolvido para servidores. É o sistema operativo capaz de administrar toda a rede.
O Windows Server vem preparado para tarefas como:

- gerir utilizadores;
- gerir computadores;
- partilhar ficheiros;
- gerir impressoras;
- controlar permissões;
- instalar serviços de rede.

### Active Directory

é um serviço do Windows Server que **armazena e organiza as informações da rede**. Funciona como um grande livro de registos, onde guarda o login, as senhas, computadores etc; só que em um servidor. 

Ele guarda, por exemplo:

- utilizadores;
- palavras-passe;
- computadores;
- grupos;
- impressoras;
- permissões.

## Dispositivos finais

os dispositivos finais, são os mais comuns, como computador, celular, portátil, tablets. um dispositivo final é a origem ou o destino de uma mensagem transmitida pela rede.

## Dispositivos intermediários

são aqueles que conectam os dispositivos  na rede, usando o endereço final de destino, em conjunto com as informações sobre as interconexões de rede, para determinar o caminho que as mensagens devem percorrer na rede. Exemplos: roteador, switch LAN, switch multicamada.
Os dispositivos de rede intermediários ajuda a retransmitir e regenerar os sinais de comunicação , já mantém os caminhos pela rede, quando há falhas ou fluxo de dados intensos ele redireciona para caminhos alternativos, pode permitir ou negar fluxo de dados com base nas informações de seguranças.

> todos os dispositivos intermédios executam funções multi portas
> 

ou seja, que tem várias portas de ligação, permitindo conectar vários dispositivos ao mesmo tempo.

## Meios de rede

a comunicação é feita através de um meio físico, que fornece o canal pelo qual a mensagem viaja da origem para o destino.
As redes modernas usam principalidade 3 tipos de fios:

### Fios de metal dentro de cabos

os dados são codificados em impulsos elétricos, e são indicados, para lugares com muitos metais e imã onde pode ocorrer dificuldades na transmissão de dados pelo campo eletromagnético.
o máximo que pode ser utilizado é uma distancia de 100metros pois começa a perder qualidade na comunicação.

### Fios de vidro ou plástico nos cabos (cabo de fibra optica)

os dados são codificados por pulsos de luz

### Transmissão sem fio

Os dados são codificados através da modulação de frequências específicas de ondas eletromagnéticas.

## Tipos de redes

LAN **(Local Area Network) =  Rede local, usada em escolas, ou casas, ate mesmo algumas empresas;**
MAN (Metropolitan Area Network) = Rede que cobre uma cidade ou uma área metropolitana.
WAN **(Wide Area Network) = rede de longa distância, que liga cidades, países ou continentes. A Internet é o maior exemplo de uma WAN.**

P2P

# Representação de Redes

Os diagramas de redes geralmente usam símbolos para representar os diferentes dispositivos e conexões que compõem uma rede.

!imagem.png

!imagem.png

!imagem.png

Um diagrama fornece uma maneira fácil de entender como os dispositivos se conectam numa rede de grande dimensão. Esse tipo de “fotografia” de uma rede é conhecido como um diagrama de topologia.

Além dessas representações, é utilizada uma terminologia especializada para descrever como cada um desses dispositivos e mídias se conectam:

## Placa de interface de rede (NIC)

# Fundamentos das comunicações (pdf 7)

## métodos de comunicação

- fonte da mensagem (remetente) → pessoas ou dispositivos que precisam enviar uma mensagem
    - Seu computador (PC) enviando uma requisição para um site.
- destino da mensagem (destinatário) → o destino é o que recebe a mensagem e interpreta
    - O servidor do Google recebendo o pedido da sua página.
- canal → a media que fornece o caminho pelo qual a mensagem viaja da origem ao destino
    - Cabo de rede, fibra ótica, Wi-Fi (ondas de rádio).

## protocolos de comunicação

protocolos são um conjunto de regras. nesse caso regras de como os dispositivos usam na comunicação 

## código  (cofificação e decodificação)

- codificar = converte a mensagem em um formato que o meio entenda (ex: mensagem == pulsos elétricos no cabo)
- descodificar = fazer o caminho inverso (pulsos elétricos viram mensagem)

## formato e tamanho da mensagem

- formatação = a mensagem precisa de uma estrutura como:
    - endereço da origem;
    - endereço do destino;
- tamanho = as mensagens grandes são divididas em partes menores (segmentação) pata não sobrecarregar a rede

## temporização

a temporização tem 3 componentes

- controle de fluxo
    - gerência a velocidade da transmissão
        - se um computador fala muito rápido o outro não entende. o controle de fluxo ajusta a velocidade (”minitalk” — projeto 42 —  recebia a informação errada e mudava os caracteres)
- tempo de resposta (timeout)
    - quanto tempo esperar por uma resposta
        - se você faz uma pergunta e ninguém reponde, você repete. Na rede, se o pacote não chega, ele reenvia
- método de acesso
    - determina QUEM pode falar e QUANDO  pode falar
        - se duas pessoas falarem ao mesmo tempo ninguém se entende (colisão). o método de acesso evita isso

## método de entrega (unicast, multicast, broadcast)

- unicast
    - um remetente um destinatário
        - enviar um email para uma pessoa especifica
- multicast
    - 1 remetente → para um grupo especifico mas não todos
        - uma vídeo conferencia com o time de devs
- broadcast
    - 1 remetente → todos dentro da mesma rede
        - um computador anunciando quem tem o IP 192.168.1.1 para toda a rede

# Protocolos (pdf 8)

## o que são protocolos de rede

são um conjuntos de regras (formatos e procedimentos) que permitem a troca de mensagem entre dispositivos. são implementados em software, hardware ou ambos 

## funções dos protocolos

- endereçamento
    - identifica o remetente e o destinatário da mensagem
        - ethernet, ipv4, ipv6
- confiabilidade
    - garante a entrega dos dado, mesmo se dorem perdidos ou corrompidos
        - TCP (**Transmission Control Protocol**)
- Controle de fluxo
    - garante que os dados fluam a uma taxa eficiente para o recetor não ficar sobrecarregado
        - TCP
- sequenciamento
    - rotula unicamente cada segmento de dados para que o recetor possa montar na ordem certa
        - TCP (quando os pacotes chegam fora de ordem, ele reordena)
- deteção de erros
    - verifica se os dados foram corrompidos durante a transmissão
        - ethernet, ipv4, ipv6, tcp
- interface de aplicação
    - contem informações para a comunicação entre processos (ex: navegador → servidor web)
        - HTTP, HTTPS

## tipos de protocolos

- comunicação de rede
    - permite que os dispositivos se comuniquem em uma ou mais redes
        - ethernet, IP, TCP, HTTP
- segurança de rede
    - protege os dados (autenticação, integridade, criptografia)
        - SSH, SSL,TLS
- roteamento
    - permite que roteadores troquem informações e escolham o melhor caminho
        - OSPF, BGP,L EIGRP
- descoberta de serviços
    - deteta automaticamente dispositivos ou serviços na rede
        - DNS, DHCP

## os protocolos mais importantes

- APLICAÇÃO
    - HTTP/HTTPS
        - comunicação entre navegador e servidor web
    - DNS
        - converte nomes de domínio (google.com) em IP
    - DHCP
        - atribui endereços de ip automaticamente ais dispositivos
    - TCP
        - confiável, orientado a conexão, controle de fluxo, sequenciamento.
    - UDP
        - não confiável, não orientado a conexão (mais rápido, usado para vídeo/áudio) (Numa chamada ao vivo, **é melhor continuar transmitindo** do que parar para recuperar um pedacinho antigo)
- INTERNET
    - IP (ipv4/ipv6)
        - endereça e encaminha pacotes de uma origem a um destino
    - ICMP
        - enva mensagens de erro e feedback (controle e diagnostico) (ex: ping)
- ACESSO A REDE
    - ethernet
        - define as regras para entrega de mensagem em uma mesma rede local (LAN)
    - ARP
        - mapeia um endereço de IPv4 para um endereço de MAC(hardware)

## interação de protocolos (como eles trabalham juntos)

quando você acessa um site os protocolos trabalham em equipes (exemplo cassico)

HTTP/HTTPS (aplicação) → cria a requisição 

TCP (transporte)→ garante que os dados cheguem certos (confiabilidade)

IP (internet) → endereça o pacote (quem enviou quem vai receber)

Ethernet (acesso a rede )→ entrega o pacote na rede local 

# conjunto de protocolos de rede (pdf 9)

## o que é um conjunto de (suite) de protocolos

- um grupo de protocolos que trabalham juntos para fornecer serviços de comunicação completos
- são organizados em camadas (numa pilha). a camada de cima depende dos serviços da camada de baixo

## a evolução (guerra dos protocolos)

- TCP/IP → utilizado hoje em dia
    - 4 camadas aplicação → transporte → Internet → acesso a rede
- OSI
- APPLETALK
- NOVELL NETWARE

## AS CAMADAS DO MODELO TCP/IP

- aplicação
    - onde o usuário interage (navegador email)
        - **HTTP, HTTPS, DNS, DHCP, SMTP, FTP, SFTP, TFTP, REST**
- transporte
    - controla a entrega dos dados (confiável ou não)
        - TCP → confiável orientado a conexão
        - UDP → não confiável , mais rápido (não se importa com partes perdidas)
- internet
    - endereça e roteia os pacotes (origem → destino)
        - **IPv4, IPv6, ICMPv4, ICMPv6, NAT, OSPF, EIGRP, BGP**
- acesso a rede
    - entrega o pacote na rede local  (LAN)
        - ethernet, WLAN, ARP

| Protocolo | Camada | O que ele FAZ |
| --- | --- | --- |
| **HTTP** | Aplicação | Transferir páginas web (não seguro). |
| **HTTPS** | Aplicação | Transferir páginas web **(seguro, criptografado)** . |
| **DNS** | Aplicação | Converte nome (ex: google.com) em **endereço IP**. |
| **DHCP** | Aplicação | Atribui **endereços IP automaticamente** aos dispositivos. |
| **SMTP** | Aplicação | Envio de **e-mails**. |
| **FTP** | Aplicação | Transferir **arquivos** (confiável). |
| **TFTP** | Aplicação | Transferir arquivos **(simples, não confiável)** . |
| **TCP** | Transporte | **Confiável**, orientado à conexão. Tem **controle de fluxo** e **sequenciamento**. |
| **UDP** | Transporte | **Não confiável**, não orientado à conexão. É mais **rápido** (usado em streaming, VoIP). |
| **IPv4/IPv6** | Internet | Endereça e roteia pacotes entre redes. |
| **ICMP** | Internet | Envia mensagens de **erro/feedback** (ex: comando `ping`). |
| **NAT** | Internet | Traduz IPs **privados** em IPs **públicos** para acessar a internet. |
| **OSPF, EIGRP, BGP** | Internet | Protocolos de **roteamento** (trocam rotas entre roteadores). |
| **Ethernet** | Acesso à Rede | Entrega **quadros** dentro da mesma rede local (LAN). |
| **ARP** | Acesso à Rede | Descobre o endereço **MAC** a partir de um endereço **IP**. |

Esses são os que **CAEM 100%** na prova. Você precisa saber para que servem.

| Sigla | Nome Gigante (Ignora) | Função (O que faz) | Macete |
| --- | --- | --- | --- |
| **HTTP** | HyperText Transfer Protocol | Exibe **páginas da web** (não seguro). | **H** do **H**ypertext = Páginas. |
| **HTTPS** | HyperText Transfer Protocol Secure | Exibe **páginas da web** com **segurança** (com cadeado). | O **S** é de **S**eguro. |
| **DNS** | Domain Name System | Traduz **nome** (ex: google.com) em **IP** (ex: 8.8.8.8). | **D** de **D**omínio. Tipo uma agenda de contatos. |
| **DHCP** | Dynamic Host Configuration Protocol | Atribui **IP automático** para os computadores. | **D** de **D**istribuição. É o porteiro que dá o número (IP) para cada um. |
| **SMTP** | Simple Mail Transfer Protocol | **Enviar** e-mails. | **M** de **M**ail (correio). Lembra que você **M**anda o e-mail. |

---

### GRUPO 2: Transferência de Arquivos (Os 3 "FTPs")

A confusão aqui é enorme, mas é simples:

| Sigla | Função | Macete |
| --- | --- | --- |
| **FTP** | Transferir arquivos (confiável, mas **não seguro**). | O mais antigo, puro e simples. |
| **SFTP** | Transferir arquivos com **segurança** (criptografado). | O **S** é de **S**eguro. É o FTP com um cadeado. |
| **TFTP** | Transferir arquivos de forma **simples e rápida** (mas **não confiável**, não confirma entrega). | **T** de **T**rivial (bobo). É o mais fraquinho, usado para coisas internas da rede. |

**Decore assim:**

- FTP e SFTP são "irmãos" (transferem arquivos, um é seguro, o outro não).
- TFTP é o "primo pobre" (faz a mesma coisa, mas de qualquer jeito, sem confirmar se chegou).

---

### QUADRO FINAL (SÓ O QUE DECORAR)

| Protocolo | Função (O que cai na prova) |
| --- | --- |
| **HTTP** | Páginas web (não seguro) |
| **HTTPS** | Páginas web (seguro) |
| **DNS** | Traduz nome em IP |
| **DHCP** | Distribui IPs automáticos |
| **SMTP** | Enviar e-mails |
| **FTP** | Transferir arquivos (não seguro) |
| **SFTP** | Transferir arquivos (seguro) |
| **TFTP** | Transferir arquivos (simples, não confiável) |

---

# modelos de referencia

## por que usar um modelo de camadas

- facilita o projeto
    - divide a comunicação em partes menores
- promove concorrência
    - produtos de fornecedores diferentes podem trabalhar juntos
- isola mudanças
    - uma tecnologia nova numa camada não afeta as outras
- da uma linguagem comum
    - todo mundo entende a mesma estrutura

## dois modelos

- OSI
    - 7 camadas
        - usado para ensinar e padronizar conceitos
- TCP/IP
    - 4 CAMADAS
        - usado na internet real

## a equivalencia

| Camada OSI (7) | Camada TCP/IP (4) | Protocolos/Exemplos |
| --- | --- | --- |
| **7. Aplicação**
**6. Apresentação**
**5. Sessão** | **Aplicação** | HTTP, DNS, DHCP, SMTP, FTP |
| **4. Transporte** | **Transporte** | TCP, UDP |
| **3. Rede** | **Internet** | IPv4, IPv6, ICMP, OSPF, BGP |
| **2. Enlace de Dados**
**1. Física** | **Acesso à Rede** | Ethernet, WLAN, ARP |

# encapsulamento de dados  (pdf 12)

## encapsulamento

é o processo de “embrulhar” os dados em cada camada da pila de protocolos. cada camada adiciona suas próprias informações (cabeçalhos) aos dados que recebe da camada superior 

- é como enviar uma carta. Você escreve uma carta (dados), coloca em um envelope (cabeçalho) com o endereço de quem envia e de quem recebe, e depois o carteiro entrega

## as PDUs (unidades de dados e protocolos)

- aplicação
    - dados (data)
        - HTTP, DNS, DHCP
- transporte
    - segmento  ou datagrama
        - (TCP/UDP)
- internet
    - pacote (packet)
        - IPv4, IPv6, ICMP
- acesso a rede
    - quadro (frame)
        - ethernet, WLAN
- fisica
    - bits
        - pulsos eletricos, luz, ondas

## o fluxo do encapsulamento

quando você envia um email ou acessa uma site, os dados descem a pilha de protocolos 

1. aplicação : seus dados (olá mundo) são criados 
2. transporte → os dados são divididos em segmentos  (TCP) ou data gramas (UDP) e recebem um cabeçalho com a porta de origem e destino 
3. internet → o segmento /data grama é colocado dentro de um pacote IP com o endereço IP de origem e destino.
4. acesso a rede → o pacote de ip é colocado dentro de uma quadro ethernet com o endereço mac de origem e destino 
5. físico → O quadro é convertido em **bits** e enviado pelo cabo/fibra/Wi-Fi.

No destino, o processo é invertido (desencapsulamento) → o recetor remove os cabeçalhos camada por camada ate chegar nos dados originais 

# acesso a dados (pdf 13)

## ENDEREÇOS DE CAMADA DE REDE (LÓGICO) x CAMADA DE ENLACE (FÍSICO)

| Característica | Endereço de Rede (IP) | Endereço de Enlace (MAC) |
| --- | --- | --- |
| **Camada** | Camada 3 (Rede / Internet) | Camada 2 (Enlace de Dados / Acesso à Rede) |
| **Natureza** | **Lógico** (configurado pelo administrador) | **Físico** (gravado na placa de rede - NIC) |
| **Tamanho** | 32 bits (IPv4) ou 128 bits (IPv6) | 48 bits (6 bytes) |
| **Notação** | Decimal pontilhado (ex: 192.168.1.1) | Hexadecimal (ex: AA-AA-AA-AA-AA-AA) |
| **Muda?** | **NÃO MUDA** durante a viagem (origem → destino final). | **MUDA A CADA SALTO (roteador)!** |
| **Função** | Entregar o pacote da **origem ao destino final**. | Entregar o quadro de **NIC para NIC na mesma rede**. |

> o endereço de MAC de destino no quadro é o endereço do próximo dispositivo  (roteador ou destino final) e não o endereço do destino final da mensagem
> 

ou seja:

- IP destino → nunca muda  (sempre é do destino final)
- MAC destino → muda a cada salto (hop) (é sempre o próximo destino na rota)

## mesma rede x rede diferente

- origem e destino na mesma rede
    - o quadro é enviado diretamente para o dispositivo de destino. o MAC de destino é o MAC do destino final.
- origem e destino em REDES DIFERENTES
    - o quadro é enviado para o gatway padrão (roteador). o MAC de destino é o MAC do roteador (e não do destino final)

## o que é o gatway padrão

- é o endereço de ip do roteador que conecta a sua rede local da Internet (ou a outras redes)
- quando um host precisa enviar dados para um destino fora da sua rede local, ele envia o quadro para o gatway padrão
- o endereço do MAC de destino no quadro será o MAC  do gatway padrão e não o mac do destino final

# tipos de endereços de ip (pdf 14)

tipos de endereços

- publico
    - qualquer IP que não seja privado /APIPA/LOOPBACK
        - endereço roteavel na internet
        - servidores web, dispositivos que precisam ser acessado de fora (sites que tem que ser encontrados  == IP publico)
- IP privado (RFC 1918)
    - **10.0.0.0/8 →** (10.0.0.0 – 10.255.255.255)
    - **172.16.0.0/1 →** (172.16.0.0 – 172.31.255.255)
    - **192.168.0.0/16 →** (192.168.0.0 – 192.168.255.255)
        - endereços não roteaveis na internet usados em redes internas
        - redes domesticas, empresas, escolas
- APIPA (link-local)
    - 169.254.0.0/16 → (169.254.0.1 – 169.254.255.254)
        - endereço auto atribuido quando o DHCP falha
        - computador windows sem ip
- Loopback
    - **127.0.0.0/8** (127.0.0.1 – 127.255.255.254)
        - endereço que aponta para o proprio dispositivo
        - testar se o TCP/IP está funcionando (ping 127.0.0.1)
- NAT
    - (não é um endereço é um processo )
        - traduz IPs privados em IPs publicos para acessar a internet
        - feito no roteador

# como determinar o id da rede (pdf 15)

o endereço que identifica a rede (ex : 192.168.1.0). ele é o primeiro endereço de um bloco de ips. nunca pode ser atribuído a um host 

## como se descobre o id da rede

através de uma operação lógica chamada and(e) entre o endereço de ip e mascara de sub-rede

a regra AND :

- 1 e 1 = 1
- 1 e 0 = 0
- 0 e 1 = 0
- 0 e 0 = 0

traduzindo: o resultado só é 1 se ambos os números forem 1. se tiver um 0 no IP ou na mascara, o resultado é 0

## exemplo pratico

ip : 192.168.10.10

mascara: 255.255.255.0(/24)

passo 1: converter para binário (só octetos interessam)

Ip: 11000000.10101000.00001010.00001010

Mascara: 11111111.11111111.11111111.00000000

| Octeto 1 | Octeto 2 | Octeto 3 | Octeto 4 |
| --- | --- | --- | --- |
| 1100 0000 (IP) 
1111 1111 (Masc) 
 1100 0000 → 198 | 1010 1000 (IP) 
 1111 1111 (Masc) 
 1010 1000 → 168 | 0000 1010 (IP) 
 1111 1111 (Masc) 
 0000 1010 → 10 | 0000 1010 (IP) 
 0000 0000 (Masc) 
0000 0000 → 0 |

**Resultado (ID da Rede):** **192.168.10.0**

como a mascara é 255.255.255.0, a parte do ultimo host (ultimo octeto) zerou! por isso o ID da rede sempre termina com 0 (ou com o numero múltiplo da mascara, quando não é /24).

# segmentação de rede (pdf 16)

## por que segmentar (dividir) a rede?

- problema → se você tem 400 computadores na mesma rede (um domínio broadcast gigante), eles vão gerar tráfego de broad cast excessivo
- consequência → a rede fica lenta (congestionamento) e os dispositivos ficam lentos por que cada um tem que processar cada broadcast que passa
- solução → dividir (segmentar), a rede em partes menores, chamadas sub-redes

## o que é um dominio broadcast

- é uma rede onde todos os dispositivos recebem os broadcasts uns dos outros.
- um roteador (router) separa domínios de broadcast, ou seja o broadcast não passa pelo roteador
- switches não separam domínios de broadcast (eles só espalham o broadcast dentro da mesma rede)
    - necessário quando há vários dispositivos conectados por cabo

## como a segmentação ajuda

- melhora o desempenho
    - menos tráfego de broadcast circulando
- aumenta a segurança
    - da para isolar departamentos (ex→ RH não vê o tráfego da contabilidade)
- organização
    - da para dividir por setor (vendas, RH, TI) ou por local (Lisboa, Porto)
- isola problemas
    - se uma sub-rede cair, as outras continuam funcionado

> a divisão em sub-redes reduz o tráfego total na rede, melhorando o desempenho permite controlar quais sub-redes podem se comunicar entre si (políticas e segurança)
> 

**Exemplo do PDF:**

- Antes: **172.16.0.0/16** (uma rede gigante com 400 utilizadores) → **LENTO**.
- Depois: **172.16.0.0/24** e **172.16.1.0/24** (duas redes com 200 utilizadores cada) → **MAIS RÁPIDO**.

# prefixos pdf(17)

## o que é um prefixo

é uma forma abreviada de escrever a mascara de sub-rede 

em vez de escrever 255.255.255.0, você escreve /24

tradução→ o numero depois da barra ( / ) é a quantidade de 1s que a mascara tem em binário 

 

### . A TABELA MÁGICA (DECORE ISSO!)

| Máscara Decimal | Máscara em Binário (só o último octeto) | Prefixo |
| --- | --- | --- |
| 255.0.0.0 | 11111111.00000000.00000000.00000000 | **/8** |
| 255.255.0.0 | 11111111.11111111.00000000.00000000 | **/16** |
| 255.255.255.0 | 11111111.11111111.11111111.00000000 | **/24** |
| 255.255.255.128 | 11111111.11111111.11111111.**10000000** | **/25** |
| 255.255.255.192 | 11111111.11111111.11111111.**11000000** | **/26** |
| 255.255.255.224 | 11111111.11111111.11111111.**11100000** | **/27** |
| 255.255.255.240 | 11111111.11111111.11111111.**11110000** | **/28** |
| 255.255.255.248 | 11111111.11111111.11111111.**11111000** | **/29** |
| 255.255.255.252 | 11111111.11111111.11111111.**11111100** | **/30** |

## a lógica por trás da tabela

- /8 → 8 bits “1” → 255.0.0.0 → 8 bits, 1 octeto para rede
- /16 → 16 bits “1” → 255.255.0.0 → 16 bits, 2 octetos para a rede
- /24 → 24 bits “1” → 255.255.255.0 → 24 bits, 3 octetos para a rede
- /25 → 24 bits “1” + 1 bit no ultimo octeto → 255.255.255.128 (10000000 = 128)
- /26 → 24 bits “1” + 2 bits “1” no ultimo octeto → 255.255.255.192 (11000000 = 192)

> o prefixo é a quantidade de 1s na mascara sub rede. quanto mais 1, mais redes, e menos hosts
> 

# IPv4 subnetting (PDF 18)

## conceito

> subnetting→ pegar bits “emprestados da parte de host e transformar em parte de rede”
> 

| Prefixo | Máscara | Nº de sub-redes (num /24) | Nº de hosts por sub-rede |
| --- | --- | --- | --- |
| /24 | 255.255.255.0 | 1 | 254 |
| /25 | 255.255.255.128 | 2 | 126 |
| /26 | 255.255.255.192 | 4 | 62 |
| /27 | 255.255.255.224 | 8 | 30 |
| /28 | 255.255.255.240 | 16 | 14 |
| /29 | 255.255.255.248 | 32 | 6 |
| /30 | 255.255.255.252 | 64 | 2 |

regra

o numero de hosts sempre vai ser a soma dos bits em 0

o numero de redes sobre de acordo com a tabela de conversão, então escreva até o /30 e do 1 ao que chegar. essa é a resposta. 

faça a tabela em um caderno, sabendo que o / xx é quantidade de 1. e converta, vai ajudar muito

## como calcular

Pegue a rede **192.168.1.0/24** e crie **4 sub-redes**.

ja sabemos que a rede que tem 4 sub redes é a /26 (graças a nossa tabela)

então, ou somamos os 0 para saber o numero de hosts +2 ou somamos os 1 e chegamos em 192  e fazemos  256 - 192  = 64 os 2 vão dar o mesmo valor 

então a sub rede é de   0 + 64 = 64

 64 +64 = 128

128 +64 = 192 
etc…

1111 1111 . 1111 1111 . 1111 1111 . 0000 0000 → 255

0000 1010. 0001 0100. 0001 1110. 0011 0010

0000 1010  0001 0100  0001 1110. 0000000
