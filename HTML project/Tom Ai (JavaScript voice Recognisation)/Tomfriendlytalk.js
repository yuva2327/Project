var transcript;
var pasttranscript;
var tomspeack;
var boss = "boss";
var knowname = 0;
var mics = document.getElementById("mic");
var text_speak;
var voice = 0;
var tom_speak;

function speak(sentence) {
  text_speak = new SpeechSynthesisUtterance(sentence);
  text_speak.rate = 1;
  text_speak.pitch = 1;
  text_speak.voice = window.speechSynthesis.getVoices()[voice];
  window.speechSynthesis.speak(text_speak);
}
function startRecognition() {
  // Check if browser supports SpeechRecognition
  if ("SpeechRecognition" in window || "webkitSpeechRecognition" in window) {
    // Create new instance of SpeechRecognition
    var recognition = new (window.SpeechRecognition ||
      window.webkitSpeechRecognition)();
    if (recognition == "true") {
    }
    mic.src = "./image/micOn.png";
    // Set recognition options
    recognition.lang = "en-US"; // Set language to English

    // Start recognition
    recognition.start();
    // Event handler for when speech is recognized
    recognition.onresult = function (event) {
      mic.src = "./image/micOff.png";
      transcript = event.results[0][0].transcript;
      document.getElementById("output").textContent = "You said: " + transcript;

      // Process the transcript
      var lowercaseTranscript = transcript.toLowerCase();
      speakThis(lowercaseTranscript);
    };

    // Event handler for errors
    recognition.onerror = function (event) {
      speak("sorry i connot listen your voice");
    };
  } else {
    alert("Speech recognition is not supported in your browser.");
  }
}

function speakThis(message) {
  if (
    message.includes("tell me again") ||
    message.includes("i con't understand")
  ) {
    speakThis(pasttranscript);
  } else if (
    message.includes("hey") ||
    message.includes("hello") ||
    message.includes("tom") ||
    message.includes("hi")
  ) {
    tom_speak = `Hello ${boss}, how can I help you?`;
  } else if (
    message.includes("who are you") ||
    message.includes("who is this")
  ) {
    tom_speak = `i am your assistant ${boss}`;
  } else if (
    message.includes("your name") ||
    message.includes("can you tell me your name")
  ) {
    tom_speak = "my name is tom";
  } else if (
    message.includes("introduce yourself") ||
    message.includes("can you introduce yourself")
  ) {
    tom_speak =
      "hii..My name is tom... i am small ai tool.. nice to meet you...madam or sir.. how can i help you";
  } else if (
    message.includes("had your lunch") ||
    message.includes("had your tiffin") ||
    message.includes("had your dinner")
  ) {
    tom_speak = `no.. ${boss} i dont like to eat`;
  } else if (
    message.includes("how are you?") ||
    message.includes("are you fine") ||
    message.includes("how are you tom")
  ) {
    let randomNumber = Math.floor(Math.random() * 3) + 1;

    if (randomNumber == 1) {
      tom_speak = `i am fine ${boss}`;
    } else if (randomNumber == 2) {
      tom_speak = `i am super ${boss}`;
    } else if (randomNumber == 3) {
      tom_speak = `i am ok. ${boss}`;
    } else {
      tom_speak = `i am fine ${boss}`;
    }
    tom_speak += "what about you..?";
    tomspeack = "what about you..?";
  } else if (message.includes("i am ok") && tomspeack == "what about you..?") {
    tom_speak = "that is cool... tell me what can i help you";
  } else if (
    message.includes("she is my") ||
    message.includes("she is") ||
    message.includes("he is my") ||
    message.includes("he is")
  ) {
    if (message == "she is my girlfriend" || message == "she is my girllover") {
      tom_speak = "Oh.. hello madam... how are you..!";
    } else {
      let relation = message.split("is my");
      relation = message.split("is");
      tom_speak = `hello..how are you ${relation[1]}.. my name is tom`;
    }
  } else if (
    message.includes("if you know my name") ||
    message.includes("my name is")
  ) {
    if (message.includes("if you know my name")) {
      if (knowname == 0) {
        tom_speak = "sorry i dont know your name..";
      } else {
        tom_speak = `yes i know your name${boss}`;
      }
    } else {
      let name = message.split("is");
      boss = name[1];
      tom_speak = `okk thank you ${boss}`;
      knowname = 1;
    }
  } else if (message.includes("+")) {
    let additions = transcript.split("+");
    let totalResult = 0;
    additions.forEach((addition) => {
      let nums = addition.split(".");
      let integerPart = parseInt(nums[0]);
      totalResult += integerPart;
    });
    speak(totalResult.toString());
  } else if (
    message.includes("can you change your voice") ||
    message.includes("change your voice")
  ) {
    voice++;
    if (voice == 3) {
      voice = 0;
    }
    tom_speak = "I change my voice..";
  } else if (
    message.includes("i am boring") ||
    message.includes("if you have any game") ||
    message.includes("you have any game")
  ) {
    tom_speak = "yes i have 2 game.... like... addition game....painting..";
  } else if (
    message.includes("what is") ||
    message.includes("who is") ||
    message.includes("what are")
  ) {
    window.open(
      `https://www.google.com/search?q=${encodeURIComponent(transcript)}`,
      "_blank"
    );

    tom_speak = `i found some ${message} impormation in google`;
  } else if (message.includes("open google")) {
    window.open("https://www.google.com", "_blank");
    tom_speak = "opening google";
  } else if (message.includes("open instagram")) {
    window.open("https://instagram.com", "_blank");
    tom_speak = "opening instagram";
  } else if (message.includes("wikipedia")) {
    window.open(
      `https://en.wikipedia.org/wiki/${message.replace("wikipedia", "+")}`,
      "_blank"
    );
    tom_speak = "opening wikipedia";
  } else if (
    message.includes("what is the time now") ||
    message.includes("tell me correct time") ||
    message.includes("time")
  ) {
    const time = new Date().toLocaleString(undefined, {
      hour: "numeric",
      minute: "numeric",
    });
    tom_speak = `time is ${time}`;
  } else if (
    message.includes("what is the date today") ||
    message.includes("tell me today date") ||
    message.includes("today date") ||
    message.includes("date")
  ) {
    const date = new Date().toLocaleString(undefined, {
      month: "short",
      day: "numeric",
    });
    tom_speak = `date is ${date}`;
  } else if (message.includes("open calculator")) {
    window.open("Calculator:///");
    window.open("Calculator.app");
    window.open("calc.exe");
  } else if (message.includes("open youtube")) {
    window.open("https://www.youtube.com", "_blank");
  } else if (message.includes("search on youtube")) {
    const query = message.replace("search on youtube", "").trim();
    window.open(
      `https://www.youtube.com/results?search_query=${encodeURIComponent(
        query
      )}`,
      "_blank"
    );
  } else if (message.includes("open camera")) {
    if (navigator.mediaDevices && navigator.mediaDevices.getUserMedia) {
      navigator.mediaDevices
        .getUserMedia({ video: true })
        .then(function (stream) {
          // Do something with the camera stream, e.g., display it in a video element
          var videoElement = document.createElement("video");
          videoElement.srcObject = stream;
          document.body.appendChild(videoElement);
        })
        .catch(function (error) {
          console.error("Error accessing camera:", error);
        });
    }
  } else if (message.includes("open email") || message.includes("open gmail")) {
    window.open("https://mail.google.com", "_blank");
  } else if (message.includes("open addition game")) {
    (window.location.href =
      "./additionGame/additionGame/codefile/addition_game.html"),
      "_blank";
  } else if (message.includes("open painting game.")) {
    (window.location.href = "./Painting.html"), "_blank";
  } else {
    window.open(
      `https://www.google.com/search?q=${encodeURIComponent(transcript)}`,
      "_blank"
    );
  }

  pasttranscript = message;
  speak(tom_speak);
  tom_speak = "";
}
