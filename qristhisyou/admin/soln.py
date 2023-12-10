while True:
    import cv2
    image=cv2.imread("corrupted_qr_code.png")
    index=-1
    grid=image
    grid_number=-1
    a=10
    side_of_grid=330
    grids=[]
    balls = []
    n=123
    for x in range(int((side_of_grid**2)/(a**2))):
        grid_number+=1
        height=int(grid_number//(side_of_grid/a))
        width=int(grid_number%(side_of_grid/a))
        pixels=[]
        i=-1
        for x in range(a):
            i+=1
            ii=-1
            base=[]
            for y in range(a):
                ii+=1
                y=grid[(height*a)+i][(width*a)+ii]
                if type(y)==int:
                    base.append(y)
                else:
                    base.append(int(sum(y)/len(y)))
            pixels.append(int(sum(base)/len(base)))
        if sum(pixels)/len(pixels)>n:
            grids.append(0)
        else:
            grids.append(1)
    grid_number=-1
    for x in range(int((side_of_grid**2)/(a**2))):
        grid_number+=1
        height=int(grid_number//(side_of_grid/a))
        width=int(grid_number%(side_of_grid/a))
        pixels=[]
        i=-1
        for x in range(a):
            i+=1
            ii=-1
            base=[]
            for y in range(a):
                ii+=1
                if grids[grid_number]:
                    image[(height*a)+i][(width*a)+ii]=[0,0,0]
                else:
                    image[(height*a)+i][(width*a)+ii]=[255,255,255]
    cv2.imwrite("out.png",image)
    try:
        detect = cv2.QRCodeDetector()
        value,points,straight=detect.detectAndDecode(image)
        print(value)
    except:
        import traceback
        traceback.print_exc()
