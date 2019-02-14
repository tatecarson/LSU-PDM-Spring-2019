---
title: Adding Audio Effects to the Signal Path
theme: solarized
---

# Adding Audio Effects to the Signal Path

![null](https://d33wubrfki0l68.cloudfront.net/9895a96ef2e25d8ace31a86e635753e974127fee/938b2/images/uploads/effects_pathway.png)

---

## Connections

- [more info](https://github.com/Tonejs/Tone.js/wiki/Connections)
- **.connect()** connects two nodes together, usually something that makes sound to something that effects
  - ex: sampler->distortion
- Connections are direction, order matters 
  - ex: **source.connect(effect)** can be thought of as source ---> effect

---

## Connect effect

- Build our chosen audio effect, assign it to a variable, and connect its output to the master speakers (using the .toMaster( ) method)
- the effect needs to get created first before you can send a sound through it

```js
var effect = new Tone.FeedbackDelay().toMaster();
```

- Build our sound source, assign it to a variable, and connect its output to our 
  audio effect (using a new method called .connect( )

```js
var multiplayer = new Tone.Players({...}).connect(effect);
```
---

## Changing reverb parameters for signals

example:
[FeedBack Delay Docs](https://tonejs.github.io/docs/r13/FeedbackDelay)

- signals have the special symbol by them in the docs
- allows audio rate control over attribute

see [signal wiki](https://github.com/Tonejs/Tone.js/wiki/Signals#setting-values)

---

## Delay example

<iframe height="300" style="width: 100%;" scrolling="no" title="PDM Sound - Audio Effects Intro." src="//codepen.io/lsuddem/embed/preview/QxBmpm/?height=300&theme-id=35490&default-tab=result" frameborder="no" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href='https://codepen.io/lsuddem/pen/QxBmpm/'>PDM Sound - Audio Effects Intro.</a> by LSU DDEM
  (<a href='https://codepen.io/lsuddem'>@lsuddem</a>) on <a href='https://codepen.io'>CodePen</a>.
</iframe>

[starter](https://codepen.io/lsuddem/pen/LqJPdw?editors=0010)

---

## Other Effects examples

- [Tone examples](https://tonejs.github.io/examples/)
- [Interactive Presets](https://www.guitarland.com/MusicTheoryWithToneJS/Presets-gh-pages/)

---

## Reverb

- the persistance of a sound that continues after the original sound has ceased
- many echos bouncing off the walls, think the sound of a cathedral or cave
- all spaces produce reverb

---

<iframe height="409" style="width: 100%;" scrolling="no" title="PDM Sound: Reverb Example" src="//codepen.io/lsuddem/embed/oyaRoE/?height=409&theme-id=35490&default-tab=result" frameborder="no" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href='https://codepen.io/lsuddem/pen/oyaRoE/'>PDM Sound: Reverb Example</a> by LSU DDEM
  (<a href='https://codepen.io/lsuddem'>@lsuddem</a>) on <a href='https://codepen.io'>CodePen</a>.
</iframe>

[starter](https://codepen.io/lsuddem/pen/jdvWWO?editors=0010)

---

<iframe height="444" style="width: 100%;" scrolling="no" title="PDM Sound: Distortion Example" src="//codepen.io/lsuddem/embed/GGYaLL/?height=444&theme-id=35490&default-tab=result" frameborder="no" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href='https://codepen.io/lsuddem/pen/GGYaLL/'>PDM Sound: Distortion Example</a> by LSU DDEM
  (<a href='https://codepen.io/lsuddem'>@lsuddem</a>) on <a href='https://codepen.io'>CodePen</a>.
</iframe>

[starter](https://codepen.io/lsuddem/pen/yZxeMO?editors=0010)

---

## More examples

[here](https://pdm.lsupathways.org/3_audio/1_sampler/2_lesson_2/)

---

# Assignment 2

[Basic Sound Synthesis](https://moodle3.lsu.edu/mod/assign/view.php?id=988729)

---

## Oscillators

- Building blocks of synthesis 
- make sound from scratch
- a signal vibrates at a given frequency producing a sound
- types: sine, square, saw, triangle
- each with their own timbre or tone color

---

<iframe src="https://tonejs.github.io/examples/oscillator.html" style="width: 100%" height="400"></iframe>

---

## Simple example in Tone

<iframe height="309" style="width: 100%;" scrolling="no" title="PDM Sound: Synthesizer Intro." src="//codepen.io/lsuddem/embed/jKJqYv/?height=309&theme-id=35490&default-tab=result" frameborder="no" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href='https://codepen.io/lsuddem/pen/jKJqYv/'>PDM Sound: Synthesizer Intro.</a> by LSU DDEM
  (<a href='https://codepen.io/lsuddem'>@lsuddem</a>) on <a href='https://codepen.io'>CodePen</a>.
</iframe>

[starter](https://codepen.io/lsuddem/pen/RvYabz?editors=0010)