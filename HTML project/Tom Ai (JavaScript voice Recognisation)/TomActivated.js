function speak(sentence) {
  const text_speak = new SpeechSynthesisUtterance(sentence);
  text_speak.rate = 1;
  text_speak.pitch = 1;

  window.speechSynthesis.speak(text_speak);
}

function wishMe() {
  var day = new Date();
  var hr = day.getHours();

  if (hr >= 0 && hr < 12) {
    speak("good morning boss");
  } else if (hr == 12) {
    speak("good noon boss");
  } else if (hr > 12 && hr <= 17) {
    speak("good afternoon boss");
  } else {
    speak("good evning boss");
  }
}

window.addEventListener("load", function () {
  speak("Activating TOM");
  wishMe();
});

var OnlineCheak = setInterval(online, 7000);

function online() {
  if (navigator.onLine) {
    speak("going online");
    clearInterval(OnlineCheak);
  } else {
    speak("Please connect net..");
    time = 10000;
  }
}
