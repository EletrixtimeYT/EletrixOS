void setup() {
  Serial.begin(9600);  // Configure le port série avec une vitesse de 9600 bauds
}

void loop() {
  if (Serial.available() > 0) {  // Vérifie s'il y a des données disponibles sur le port série
    String input = Serial.readStringUntil('\n');  // Lit la ligne entrante jusqu'au retour chariot (\n)
    
    // Vérifie si l'entrée est "paxos.getversion" (ignore la casse)
    if (input.equalsIgnoreCase("paxos.getversion")) {
      Serial.println("PaxOS 8");  // Répond avec "PaxOS 8"
    }
  }
}
