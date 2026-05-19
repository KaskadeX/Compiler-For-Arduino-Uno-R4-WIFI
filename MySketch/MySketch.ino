void setup() {
     Serial1.begin(115200); // Initialize SerialNina
    }
   
    void loop() {
      Serial1.println("FLASHED");
      delay(1000);
    }
