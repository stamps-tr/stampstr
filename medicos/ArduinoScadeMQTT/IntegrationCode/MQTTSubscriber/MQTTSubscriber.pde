import mqtt.*;

int xPos = 0;         // horizontal position of the graph
float height_old = 200;
float height_new = 200;
float inByte = 0;
boolean started = false;

MQTTClient client;

void setup() {  
  size(1000, 400);   // set the window size:
  background(0);
  client = new MQTTClient(this);
  client.connect("mqtt://iot.eclipse.org", "processing");
  client.subscribe("STAMPS-RT-TS02");
  
  stroke(0, 255, 0);
}

void draw() {
  if(started) line(xPos-5, height_old, xPos, height_new);
}

void messageReceived(String topic, byte[] payload) {
  println("new message: " + topic + " - " + new String(payload));
  
  height_old = height_new;
  
  //Map and draw the line for new data point
  inByte = Integer.parseInt(new String(payload));
  inByte = map(inByte, 0, 1023, 0, height);
  height_new = height - inByte;
  xPos += 5;
  
  // at the edge of the screen, go back to the beginning:
  if (xPos >= width) {
    xPos = 0;
    background(0);
  }
  
  started = true;
}