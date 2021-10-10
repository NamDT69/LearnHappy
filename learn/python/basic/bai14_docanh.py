import cv2
#doc anh
#doc anh che do den tramg cv2.IMREAD_ANYDEPTH
h = cv2.imread("python/basic/anh.png", cv2.IMREAD_ANYDEPTH)

#show anh
cv2.imshow("anh",h)
#dung man hinh
cv2.waitKey()

#donng man hinh
cv2.destroyAllWindows()