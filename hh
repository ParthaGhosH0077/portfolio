
#footer-div{
   
    height: 30vh;
    width: 100%;
    background: linear-gradient(#ff2f05,#fe330aea);
    filter: blur(25px);
    left: 0%;
    right: 0%;
    z-index:7 ;
  
 
   
}


#div-move{
    width: 100%;
    display: flex;
    justify-content: space-between;
    z-index: 8;
    
}
#div1{
    height: 50vh;
    width: 100vh;
    background: linear-gradient(#ff2f05,#fe330aea);
    
    filter: blur(25px);
    left: 0%;
    border-radius: 50%;
    animation-name: anime3;
    animation-duration: 4s;
    animation-timing-function: linear;
    animation-direction: alternate;
    animation-iteration-count: infinite;
    

}
#div2{
    height: 50vh;
    width: 140vh;
    background: linear-gradient(#ff2f05,#fe330aea);
    filter: blur(25px);
    animation-name: anime4;
    right: 0%;
    border-radius: 50%;
    animation-duration: 6s;
    animation-timing-function: linear;
    animation-direction: alternate;
    animation-iteration-count: infinite;
    
}
@keyframes anime3 {
    0% {
        transform: translateY(0%);
    }
    50% {
        transform: translateY(10%);
    }
    100% {
        transform: translateY(0%);
    }
}
@keyframes anime4 {
    0% {
        transform: translateY(0%);
    }
    50% {
        transform: translateY(10%);
    }
    100% {
        transform: translateY(0%);
    }
}
#div-list {
    
    width: 100%;
    z-index: 9; /* Ensure it's above #div-move */
    display: flex;
    padding: 20px; /* Example padding */
    justify-content: space-between;
    padding: 0 15vw;
    


}

#div-contect {
    
   z-index: 9;

}

#div-contect a {
    color: #efeae3;
    text-decoration: none;
    font-size: 2vw; /* Adjust font size */
  
}

#div-content2 {
    z-index: 9;
    /* Adjust font size */
}
#div-content2 p{
    color: #efeae3;
    font-size: 2vw;

}



#footer-bottom{
    border-top: 1px solid white;
    height: 10vh;
    width: 100%;

}









<div id="footer-div">
<div id="div-move">
    <div id="div1"></div>
    <div id="div2"></div>
</div>
</div>
<div id="div-list">
<div id="div-contect">
    <a href="#">Work</a>
    <a href="#">Contect</a>
    <a href="#">Email</a>
</div>
<div id="div-content2">
    <p>THIS IS ME</p>
</div>
</div>




<div id="footer-bottom">
                <a href="#">Portfolio</a>
                <a href="#">Instagram</a>
                <a href="#">GitHub</a>
            </div>









