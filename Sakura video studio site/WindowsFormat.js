// JavaScript代码可选，用于动态控制排版的显示/隐藏
window.addEventListener('resize', function() {
    var defaultLayout = document.querySelector('.default-layout');
    var alternativeLayout = document.querySelector('.alternative-layout');
    if (window.innerWidth / window.innerHeight < 1) {
      defaultLayout.style.display = 'none';
      alternativeLayout.style.display = 'block';
    } else {
      defaultLayout.style.display = 'block';
      alternativeLayout.style.display = 'none';
    }
  });