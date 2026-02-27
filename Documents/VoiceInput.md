# Speech-to-Text Feature Report

### Goal ###
To implement the voice-to-text feature for our project. This allows the system to listen to a user’s spoken command and convert it into text, which we can then send to the AI for interpretation.

### How It Works ###
1. The system listens through the laptop microphone
2. The user speaks a command
3. The system records the audio
4. When the user presses _**Enter**_, recording stops
5. The recorded audio is sent to a speech recognition model (Whisper)
6. The model converts the speech into text
7. That text is then ready to be sent to the Gemini API for action parsing

#### So the flow looks like this: ####

Voice -> Text -> AI-> Robot Action

### What I Installed / Set Up ###

To make this work, I created a _separate Python virtual environment_ and installed the following libraries:
• _**openai-whisper**_ : for converting speech to text

• _**torch**_ : required to run Whisper

• _**sounddevice**_ : to record audio from the microphone

• _**numpy**_ : to process audio data

• _**scipy**_ : for audio handling utilities

The microphone records audio at _16kHz_, which matches Whisper’s recommended input format.

### Current Status ###
• The microphone recording works

• The speech-to-text transcription works reliably

• The system correctly prints what the user says

• The module is structured as a function so it can be easily connected to our Gemini API script

#### Example test result: ####
User says: “Move two steps forward”
System prints: “Move two steps forward”

### Why This Matters ###
This feature acts as the input layer of our system. It allows non-technical users to speak naturally to the robot instead of typing commands.
Next, we will connect this text output to the Gemini API so it can interpret the command and generate structured robot actions.
