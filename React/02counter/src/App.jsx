import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {

  let [counter, setCounter] = useState(0)
  
  //let counter = 15;
  const addValue = () => {
    //counter = counter +1;
    if(counter < 20){
      setCounter(counter + 1)
    }
    // console.log("Clicked", counter);
    //                             |  
    //normally it by writting this v multiple time 
    //setCounter(counter + 1)
    //it only update 1 time because of fiber (packet of same instruction)
    //to update multiple at a time 
    setCounter((prevCounter) => prevCounter +1)
    setCounter((prevCounter) => prevCounter +1)
    setCounter((prevCounter) => prevCounter +1)
    setCounter((prevCounter) => prevCounter +1)
    setCounter((prevCounter) => prevCounter +1)
  }

  const removeValue = () => {
    //counter = counter -1;
    if(counter > 0){
      setCounter(counter - 1)
    }
    // console.log("Clicked", counter);
  }
 
  return (
    <>
      <h1> Hello World! </h1>
      <h2> Counter Value : {counter} </h2>

      <button
      onClick={addValue}
      >Add Value {counter}</button>
      <br/>
      <button
      onClick={removeValue}
      >Remove Value {counter} </button>
      <p>Footer : {counter} </p>
    </>
  )
}

export default App
