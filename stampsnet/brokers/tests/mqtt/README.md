# Testando o broker MQTT

### Preparando o ambiente:
```sh
$> npm install -g mqtt
```

### Subscriber:
```sh
$> mqtt subscribe -h stampsnet.hashtagsource.com -t 'teste' 
```

### Publisher:
```sh
$> mqtt publish -h stampsnet.hashtagsource.com -t 'teste' -m '123'
```
