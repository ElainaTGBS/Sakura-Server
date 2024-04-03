

//随机图片背景

            // 需求：当我们刷新页面，页面中的背景图片随机显示不同的图片
        // 分析：
        //     ①： 随机函数
        //     ②： css页面背景图片  background - image
        //     ③： 标签选择body， 因为body是唯一的标签，可以直接写 document.body.style 
 
        // 创建图片数组
        let array_pics = ['../../image/background1.png', '../../image/background2.png', '../../image/background3.png', '../../image/background4.png']
        // 生成随机数
        let random = getRandom(0, array_pics.length - 1)
        // 随机获得图片
        let randompic = array_pics[random]
        // 替换图片
        
        function getRandom(min = 0, max = 1) {
            return Math.floor(Math.random() * (max - min + 1)) + min
        }