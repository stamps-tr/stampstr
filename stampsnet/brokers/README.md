# BROKERS

Serviços
---
- **kafka**: Message broker 
- **mqtt**: IoT message broker

**OBS**: Ajuste as variáveis de ambiente (environment) no `docker-compose.yml` conforme sua necessidade

Serviço: kafka
---
```
docker-compose up -d kafka #executa
docker-compose down kafka #interrompe e remove o container
```

Serviço: mqtt
---
```
docker-compose up -d mqtt #executa
docker-compose down mqtt #interrompe e remove o container
```

Executar tudo
---
```
docker-compose up -d #executa
docker-compose down #interrompe e remove todos os containers
```
