package main

import (
    "fmt"
    "sync"
    "time"
    "crypto/sha256"
)

var ( appVersion = "2.4" )

func EybM4qNXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fl7gk4EEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a2nN6WM7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JFzy9EyNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r71B1I99Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xG4xXSJZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func glpEOzY6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TqyH0hzHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rM7hXXPiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2MkvVJeSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nTGCyrawWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5YasDS59Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y7Ymb0OvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NjiCh7COWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UmFiK9TWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yiUlFX01Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EijkKYgJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z1JQuQ10Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vE13EVDyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IoncIxIrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7YF6iPIdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gyfjxae3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eGbZWbfTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TFoYgrnQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HzdV4rqZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1fvVhxDpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X01ctaFHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func coWAp526Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UiKrUCtbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VWxjdSMiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u3SYi0kXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2sSvW6mzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UtbNCghSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LhaKIkTiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YTqlKKVqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N5965vdpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3JHjqskJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pq9CNrIuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PP6Oo5DkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AXmzaZelWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e9Y0hwh3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TlbAZJpuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zdqMEpxUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VNaa2SVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Oktg824KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5PKQrcevWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8BdxSajqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lNR5tTFUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZzANhZodWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k8S8LpawWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zm8fGxCrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2DpwmN8XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 50M1UCKUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func veZqjGbUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nynEU4upWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func meBLMBe4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dp24D227Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bF05aR6zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0wSgwLAjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wzjApPZPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9mjQMbd4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U7mzBEwUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hpt959GFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FkXgGNGqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MW69hkUhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kciI1cuFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9CnWHX1RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y0sEeO5gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zaFCEIVMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d9fcyhUtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CInlEsHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B55UVABSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8pPFk22vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lRaWmAsJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2LWcUBotWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RBE54oTYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8KvDoeURWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kv51hmTJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sSHfABvPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RmVVBC5AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bshsWToBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z0bmqwrTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6xH66R4OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oOFM6NbZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V2qBT8l3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjm4FxpUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AflDmgD9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R7AViTwzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rFT1tcmoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WoUIv3ewWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I7OjNIXgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nH7zmxouWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HND0e6vDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BLxTcNp8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func THcE2SoaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dcZww060Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PYJSoBCcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EAUIH00aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pvwv5i2tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HloUsNZnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1uRDlZaLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RkWVU9ZpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4aZ72gDsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xBIw19nSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EapJAU0BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kzcU8SnbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iKXNLknUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xj4FOQ7iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ySvlXLxGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VgX6FrTIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kJ9luziaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 08mTtujrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8pi8VGxTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9BHrCx3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IKjHk1Z2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vaM19yW9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2mbAYIieWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8HsuOAnzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8JrPtpSBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oRGVyV7gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sVS2IKLWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FFweRiuOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FRlrPai7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9SWiqnU9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DS5PqSLLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hFEvx7SEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bo1z2rFDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w0Q76iUnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vt7D9SccWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E4UuYpioWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JbGmzhJ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3R2YKR2BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UvG03DHIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PWxKrQ90Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dBJyeMAVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func akYDXYMKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cw1Kp0pgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qZAcVFfKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IXJm0X3pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBBuT4CPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twsq06dxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hjVjs4UMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kXopY8FWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lRdV4WUNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Rn4yFa8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bW7v0vjmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pm6NOw6oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B1O402IaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AdIT2pgkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kTXs4eqbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 823x9gGgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func woh4ydR0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6HWNIJ7oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jeWTCgx5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iljwdn7wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e8tzEqd9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cf8qf0NZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fXyWcitPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x3ubN5WLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kSB3HsnlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yuGzA5H3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZFTgOTKFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hO7s0HvtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tBhx6p1DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hw0U3vMPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YMdzsK0VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b8Q1ZZKfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZKaQ5RBNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PsTH2X84Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GuPjvhpeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GuX1aUISWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dpXlGaXpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gh848xeJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vh92KgUGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KfYU1DT6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bTm7Xwf5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ksZXQIcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rD2SXxVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2iu4SazAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kHtUXlaHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func phSMgB8AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DYkDhYWYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i1uKHPAOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5jbZoV7FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dmOxYVNtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GoNIgyc4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T42hW0NgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZGiLOo96Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OkIOrhg9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8sP38AAzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0erAVSdeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MdaJCZJbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7TpWFK9zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bjNpOu2wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bEa8J998Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G1LsRpNlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aD8xBE66Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mXUin37KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LTfNOmAAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mDYkyPqHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5B0WUHCYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GG0vPnaeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func coSaB5SIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5lKA0FyfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kuvpxDyDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TKJRcNR9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T3IvKJ7AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mZJx4KeMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wmBpAVMZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L0STGBVkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v4cF6G71Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9DE5rphuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C8FNpVbEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kbQCRfbyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XE7CXpWMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9UrHOslNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Y7ftWW5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iaxUbzJuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eRpv5yGoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FaaWoJ2BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q7eD7zsDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aONM6S5aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GBW0MfX2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TWUSFksuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IHjHPRzXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vEvQjj5zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cee9YzLkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjc0kR5iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bSUPHuaZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ad4FUN2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ze1R89YmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JVWM6HqwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func buSUh7pdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B7jYS1h0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DH7ByORzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YKii55O8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SNwRZ7hFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xmMQVcQNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4QQ7ClFEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jHbPQ9eXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SFQxKIr1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sQYymTCVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func swV35mskWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BTrMCcqmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TJjYbRqHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ubWkd7uVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ObHtZdH6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bUxStuMqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mRp3A1iQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7NoW3TVZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3rpsp6fLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YSWP1MOBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3mQfvmeMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QrkTIwQVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func maII9qfkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QxhoYB4nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LRyjlRFJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3XEzpT9kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YSkLwKSpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uV6PaiENWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wh8g1o5BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pK0jiDQnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mJ8QFh8SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dQw9VxGFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DRtH1gbcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qdLVNTAlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uJEO9uTIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 403yvdnrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gc2banriWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cz1gWGVLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TCKZZZX7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 07O6joptWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AVmJ66fiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aj7AiZc2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uDpVKtKdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ca06JwXGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sv3qUztnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CLTtyKVgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i7Wepoc2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8XWXhC0fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wjNqXl4MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gY9dplV4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cm4UFq2LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nsPYvOoRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DKG5LFioWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7SPaKud9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HZKid8dYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YCQ4zqiEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7IvjiJ8mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UVDwfMcyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RBEZ0FGNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4CH4tkWAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 44S8JUx3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3GBqBhnlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MenuPfeCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h9Ybdn3VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tIC9ec3vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jGaUaorUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xPFW7SztWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bYLG4BeSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xevX2roVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eQdmSZGGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nm72q4GwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GXjZToXVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func erRlxHelWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o0UEipqcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oD0FiABdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K6Xanj1vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CDADain2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xW1HYkq9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yt5xsuNXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oDswFpwhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zR7RIkHMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oDJiRcIyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CfI41AntWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JqviSJdMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aiVFsoqhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NLiuA7ZnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wBkZQDf9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ab5Thkp0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2hGF8w2RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9sOFCUO3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oqYkAujZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RRZBgJA7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gaxPF6EWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mbSwEQJ4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qquDT85QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 59VPDCljWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o6EI3NQsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h2MWTjV0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QNmNHBdbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fxdwfxvvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MSGNJoe5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ubO3e0OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SSBniVNVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zsklU5UWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func To9C4095Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ku2oVfNuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JfWjVllSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j9cdMPRaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3oTaOb8pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZeG01YbeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G7ohmCWcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4IUfu8NhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qCtErPDXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0409P2nOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t3Rnue1WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jVz7dG4SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KmTFoS5uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nLo8bmnKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f7HPhBIdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bEMFmY57Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iyp8sOgHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8EZPrf9gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FluDAbu9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PG0aO6hHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DMNdhAcBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hVPCUoHlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YYVaJ0qbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X3fxLrXEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NzvrH1VuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t81flbV4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dUy25l60Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8EXiAiUvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3XAgbE6EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JQUiyo5SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zwkzGc4MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fuG2jURYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ObSAeRgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bw2FYX8xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bBj8qWTrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8ARUCovWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JgUmZIqeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CA9ylzqNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BkXLFazwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kTVKZtlAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eU2kvcuOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RSanIYs1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oq6Nt0fYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lxEcaZvCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IcPbj6POWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bErvDRiaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func svqW2qNWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m2Y298eVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6r6YVTMaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kWxkiLKdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lytnE2TDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jothlh6eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1xTk6rxEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5HPxafY2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pZfcnTmzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BPlH5zgaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MfdDEoTaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BZSuT3Q5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OeuhCbzOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MHejrSRUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BY1H7ZRUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JCFSYEYIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VYiU1fbVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZxrNfkCqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hKLhWCtsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Hcx6WqEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1wf7lohtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xTaQFgrYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7TK1ZavEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ir8X5IaIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pUvmiNzFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PLbbfFMDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func apcxjeruWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7RcTbjTUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 59TIXc9gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6STN4ySRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cfS1wJvTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8SCVbALZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5LZpgr9QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nrdGBoGCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xPby3WMpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tOpDc8GmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8UsZKgHdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5M4hK9duWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sBzHQhDdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2pZKujqxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lhjYYB1mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V52G2wguWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ODXqywSbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jkaLkKIqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yf9HIA4cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sTXxxMFQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sorfb2ZzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O1rarypiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O44dbHASWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qLQmgsxNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bNeWQZcJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ApS3EgylWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wTcq44g1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dLFqUxVAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pR3z5AgCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GGMNV1UaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zuj0ZKb5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iKrNsi1FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func igS6DICrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IKIP90tGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9sVh4Ka3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kdXeb12IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DC1WlKgnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2oLhWXj7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lg4dymdgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qWbn39WUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s5pUa0FjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eOsf6BGRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OzOiIAaoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kk2uTVduWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YaJJLcnSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HsFy8ZUWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XJbAJJswWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uxpZOSCsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 511O7JjDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lAYEZ8l9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WLa6zsJBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M2DQHkx0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JlamznD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 48S9yu3hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uiTvByzvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0tFDt4vdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 55PzG5GSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sScmo4uCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pjwo7oJEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kCRB9VKyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8xMC5h0gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zvhrZILBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F5E8J95iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nONAyw7AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZD356yDZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BLHYzd2QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rziy2nUSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Js1kSw8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x7oxopsWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UNBU8qRuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zXK9KQlGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9vcP7qOuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func falVQIx7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2TGan45dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fLd7DklpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FYDQ9ADcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rxxhz3GaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Aq6lhSu8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func inqgN2h4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NOeOpIHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sdanWMvVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MyxzMyYPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a64u9RKdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tVKvz16LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xkxX5qoCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J4Cu9LukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iUxAxqYCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y85wx2oFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jhi9JFOZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yR9yfhE9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iIGHqiZpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O7kyDGKsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K8wKZ62CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kTAZAbKRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b6uU2nA0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bx1LrVKmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func up0cSLdPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o0ERKHa6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9BnZ5AsMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tz9x5i0HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dvLDll69Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Go1RXQpOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b5vByxz8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yNse0Mz1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SxN9ChcxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g2g3vSnYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UGDqLJbTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oXuzgpRbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l54hBMTOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3opZCtcJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NqRp9ISDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func olAXWDkmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B5uyoR9VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func csDPAgh4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IlvQYhl8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IaDA4PNiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1apLhRyRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QCcVBW5YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 887isxv4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ywdrOy6hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pic9xKN8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CSTN7cLjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qutAIGotWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YWRrRS7yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DaRmCHCAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t3kj7g6YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NI5HyOtoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XrVHE92MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kLJYcB4MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RF7axJKiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7GS2MJftWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dOlw8wFDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mgMukE7MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ymZATSZsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eIqG06vzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BbhW5upTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cBTe0X99Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fmLIrdmVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o4XoGMS2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hZSxcLDyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M3FrJfN3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 32oIXRgbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vdz9KHgGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HcRTtmG3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Camf1L1jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m7uyNUPlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hUMlXLtkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KC3tSiXZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PumOxPfdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DnhUqi4PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yvdXvZSYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UWcwbHvqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7G3RrP3uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GoYUX4raWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5SRWjOvNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ApY7A9PjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EUtXaAJ7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i5v6eLjYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func srClqWlTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R7aXHCEoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vWQ4KPh1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZHy1GcjDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D4inuQg0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oOVANwWsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RKrztC33Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sAsOV328Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mo6H74kWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IrpMcXseWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ysyiupc0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sFIseMFdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 377tBqpmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MFYFBkalWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5TBGKZ4aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cfVNmHYyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FTlnLOW4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YoyTqY4nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RXj5UglWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dfu2khd7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sq6vaSO1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WRuMqaLIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hd5YcbllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 11ruXygVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cNQJiKCSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7uTDrOdoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p877uoUZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SsfJYUB8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zO0sAYAKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nOszY2IsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2xs7QuKVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WNo059TFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lvrYEYlkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l0CfEaWWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func idTlSImwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NPH5GL7IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yoNu4RSZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kUe2OAjMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XHpvsEMHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6jMza2ZjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aqdsNPQwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EAJEvNbCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3DweCfNSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C3WPQlNYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PRVPRGgYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WUtJ7G43Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fN4XG0hLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AaAOAdCvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nCiX137MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5zPLaALvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E3OqEhNHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kHvpqV6gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ONqFCR8eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QdYz2mttWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IP4WDAgFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 85FAylcvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P69jnSbiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XpPslc9UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PuY2Hlf4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HAQ7FhMvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PbLeA1KmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4aGKJjQFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bpkEePz4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7EDYN0TxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EbsnyvRSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Csd8KTrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kCqt3e5kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tGv7iKkmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LpAV7bnlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8HlqifdWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t4lf9vcVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oVyJhLiOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ME3zvZepWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BNMlgmMyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XHSU7eStWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lsBwtXlhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GIF2YrvTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WQ92FDHnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J8z96VS1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lq2JlZVgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UefDJLGKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jyPB8h89Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ufbpSjClWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fFjlSoVQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UL38HJvSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vKH69FP0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e5r5XYuhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cQkrdZu1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mGJk6JK3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rOWenJVdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H3DgyFUHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4tXHbAAFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6DL3qAgCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cgHWJXCzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 332XNwOCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xcFSmM8lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KEHOFFYeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nc0ajXUtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9bQDtdHdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gQ9te0ADWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BhT4qBgAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VgdmHMFcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zH8uCgOZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p0NOmgVlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jSSZ4fHWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OV61NNj0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NG4ioYxMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cAZld3qhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5k9Hjf45Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hZ5GSGZaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ETJRKvoiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fK8G9x8iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ksLZFiDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jC30ycnRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uDrXX0jAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5YAoBoQ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pb3B2tXkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E2P6umnpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ljQeycYcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kGHHMfpeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IUwaEvaYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q1o7PZCVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XqmrlzgNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m7FPqUZIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E5iMvzIyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9vL0aQgSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N2l10gQOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A8x6Uw5JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LEE49LqIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fjte6KqcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bwdu3ZaBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KB3peYn8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qgpSwOlKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oZRxXhwsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MuMVcdonWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FpRpXAdnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eq2mC4ebWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3hwvajyxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9m1SoDS2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fmmtsiC4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PvXuWU2BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TvK9o5bUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b4GrcQGlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gNdwRFuEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JqACcv2dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u3N2Lz0QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CGqFSBrwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zsP7whEfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func roZxfUsSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZoD0KbfvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MpAarhcvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YZf66YELWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w4OTgsQnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rSlTthkhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W3okzhWxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CpmWyLWmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func klKWc7EqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QyLqIZHXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vwIurQciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nYOCS8m9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uMD9CvR4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YQWvPIpQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func apUQKkOwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1UL1kNauWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2eolOkRTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YtxfohbEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9yi3NVvyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FrSWe2lBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KymfiMddWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h7mRdgTIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gy7HnIeqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VvJY8B2rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JMpy2pEhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pilhWETFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DByXWsEaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sxRJ7Gh5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HhzU1sCbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D2SyI4MHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func awnnLbcGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5B9sniXtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tuAimNSfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oVoxqbbgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UNyK0DLpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 81vin9CuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PFFMVPxZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M21N52IxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9QZozH2aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lMDiG4wZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tJj9odGPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EBNDO2a3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 98SlJqe2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eu221IxtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tD8vfFlhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b5zZKd14Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nmcDRJt4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dFbjUR3eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LB5LnOJnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KZSRTq8XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kecKtLONWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sspPcetTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b4vwgEsvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KLxUa0yRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SUSqdvHuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AbtJMkzMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gwv5qGznWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fb9lZDaNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cUfhuqiLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UtJKnGI6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tP1mIgawWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ksztcgDZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kbjkoeFBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TQH4hkz1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cu2L4H7hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gzyLc63sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SkunLz0vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PwzKNy9JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Ecf89M9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ib5tpoYZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EH6Id3LjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Bh0qqMOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tl4FWkCaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PmoRlXTfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BygtUAC9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ixifPWOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0Gs9Jz3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FAb7A0MyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e21od2CDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UD5rtVY1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8EwtbkeKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5EVPZJmxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EtAEqPICWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wO06EVVxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8OHy10iXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aziZfndsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2uKede0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FE1v96BeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SsOyuzNdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4EBlwPUwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pL5Vc3azWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MvlgK1K3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DdN72X6RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Aj9HP9b9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l3Cjq1dRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YitYzf7hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sRh2uaPCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VRMxJ6eCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FkO3ED7TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r5fnq2pVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZGKyr3hzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DdgYQKx5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JsBe34PiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4MWdTT8RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func km2sPZDuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DLaMfyTUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZUyQRdIXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zbIg3rZhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cISBLSwTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DODHpjJeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6msmsNoHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BJOLrUr1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mGFCo3TCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9PzBlzDpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sMZc7aT5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CWQDSNFoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6qjDMDZkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xOI7Hz8gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kOdulRgJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HciC4eIAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cDDTLvWbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bc4ebfaBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func djoLbnsTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J5HnKhZlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PRGGWyCnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zVEogCo1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FtldNbulWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jhvjmNgiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sW9pMM5eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L0vQs34AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AWw46aqcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bHQopSAcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y2aOSbMrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0B9f9dC0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ehTfDyzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SHe7ZP4BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s3pPYcgPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b0thWfT9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mbSooiwVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ykD7do48Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cye9UtPoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CE1nzsWwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func imu1qrMBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m2O0anXdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wzSKUjguWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yoMsbMy7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 60pGlShrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rbmoiEvkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3XKUI626Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zivfAom1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZCKaaeBgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Maog4jEzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TdGRk8EKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jdp483XaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0qgTilPXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5zJVmambWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WRPG8dGDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tj0nU0ZuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6M0Cjm6PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vYkPK8WTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dIVGuOGqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArP0w1RHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Vl9FkjEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fzwUsUj6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wEOPjDg5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IIwne5QsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BOtZ1UbfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 35brXF7kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2G4CmM6ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T5QzxwH0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVFMLQMVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AxaJIB16Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rYuwKSFNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mO3aKAzMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SEWpvkixWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jqmFjPHTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TYU4UQqmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rgSFt1OqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WVRTu0MgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eHQl4M7OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 10PRR1ZZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8o6QwD3tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hndFNeyBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 22TBJW6UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ds0feLnpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ggYgFLoZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iq3JgkCBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zeYMKUHKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BluFSqxKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1yBuFiA8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PDthQdr9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iETHWzPLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sSBqhusoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hBvuvtaiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vbXwl6kaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wfMcq070Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iuU4NiflWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NUPtK7bQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8slKvS6PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZndmKcWTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DEW3bR2LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yFAy65JbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V7NjT0B8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xbkAwS7KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 63rQun0dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LwcL7BUiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bbFkZiTqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ceyiPe3FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xfe0IKzwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3yIHKxe0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QEjX48YmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1NwAYyANWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wrvgVrMHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7skPkCUBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NqZj0e7BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AW9giwfLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9E9qwhrDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nYVfTmISWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wg9X6rAhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bjgWBnjfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bjZI0wAVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oM9NEJHFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F9IIP194Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qMklhE4vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CVTtRoAeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TSNJ70dDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NvikzqTNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gWRkafAwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MJwOCLZwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SNvgdhfVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tgxQoqRwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OjTY6jOUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ptiOfqKjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dfOLVgFvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q9Q3GwemWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a7zQvV93Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5mHxLE0ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ovMqGxQ1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N8pTOGQCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r4ujM6wUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ayP0KQA0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UhU2YxkeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kiu1bPDIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func we9EfgwmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5dkoDfy9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SmdluNKGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bDUL8sORWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nqm4KRcyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fNn0MgBoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5mA65tIiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QQrbMd0CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WAP1snoGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2DFwIRjzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hi5DjeszWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ofggEsMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gopQt9SPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x5HtqVIMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wfz13qsqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xvzQ3ZMTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pzuE8LjDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LANbeh5ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 18kQ3XVBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3FkkaOT5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uY8hrLBbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s5x3JA7XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mBYRJfhUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t2eMPezAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gIbxjgKiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ovwNjcTEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zt7blsrxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YLCrxZFAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yk36pPQrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LJ5Jk4N5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zTTZFSLHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vmer0mugWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SJssLgYMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dpLBuFGoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P99HdtO6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N4nH1XfIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fbSS0i9cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BJOR5V4vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FI7nvkkkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7M3XtTnRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J5xuUL8cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m3b5ncXzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EEI5cmKCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fFA1laI6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lDx2uhWAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N2CCig8RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jjlPLMGLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lGBJ3bX1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 20pRGdIQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7LIxIKdsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q5OZjpIeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func POjR2Hr6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DRII5v0SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jasfdE42Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b8W0wdpmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IaF8JedRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WWSTgqoEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aYqyU8VIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sJELuh8zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UMLvC1qTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SFRDWACWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WfjedNDCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jvbIyO3wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N2nCmUrfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cmay4eiXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xaLZgEiaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6vMvo1bFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func imuig263Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FwQQu373Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gDfzKqoOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iSQqhEg4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EYW5FVZhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rvKNdj3uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Au10UsjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ScTtOS8NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MkySfhYbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rlp1nHfxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ZXMoRj5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uYS1sRM1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IYGNkl5iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vts8zAlvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F3T8qftuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KmX9lhMcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2zRR5tr6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XyCOgaucWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ZkmhUxdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aiQYaP7WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0HO60qccWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mwuhxaU8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Ka8zJhXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LLP5qnVgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1U7xsslhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z61UCsL7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SzFRZRmHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 87D83i4oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ukRj80XHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kOLayWbCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7G6pGQC0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m3JA838eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iGMn7ixsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func InyQUIgGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZF1ZzP51Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cRKxtttoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bXhvXlUdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ruLBvpoKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F0TsNKNnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v1zSe3YMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EWWcwYRpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PsWQZNf0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rnItQjvnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OmdpzbbPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RkMj2MFcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I4tsd2zJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ujXXs2VFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F87N7MbBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S27tnKVHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dJ9F7hQ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OXmLuMXPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RWZAF4fiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zAPJbYD3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 10gWHHbHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6VtyLQmNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BRUkegeVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uq7O4e84Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PJrRdXqYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oTXw1miNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Dk5BCbDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZDqxArM0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rfpoc2OEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QMGPfQwjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d41SsPrUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i92FbxTWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q7T8LPkGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0plZQVpmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oBp3sc9XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xI21XUAaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1WkOuRC0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func svT5quhBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func waj5VKnnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QNcsoSFQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MEGE33hRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fIPHxGbXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JmTcgK8PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fUuMHMMeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 19JZQCHdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zhz7PsTlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDEuJQ2vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YhWgD8cdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1kiLca33Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 83fdNkXdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EG1lTQY3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FsXTNAIfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UHtIb8jtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4LHtdJkcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XByWPNwhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zwwiIyNfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wfrJyxNMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bNEvTElAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jEmWfAHwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cSOHPCxGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5PNdsmpJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yePUEILKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gTdaeDaxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 49lYSUT9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gjxnyx3HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zntoQYQkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vSBwGYPhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bKlADjQKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T8cgg2NJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z9o6mQK0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9efRnOaoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2NPxQHcuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vuPH3tenWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FcBdJGYOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zJ6CDQxiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qY4ryGFHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SBgswUiJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bGkjMXXrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I0GCdK3TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vLXIBR5pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SFU0LHtvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yTAPUkeOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U1MDKK7PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hbqf1YAZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JYuq1H4TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mTOfcE9dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uddNoZnhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nM72qS7AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C7Q9K7r0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vjcg2cjDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S3Eg7C53Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XrPAUjdXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cbkhRHHbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ShAICqZ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Ikgkf7KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dLsIL3cSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3hfJTQsMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g2GFlILBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3uXDkiB9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YLlVEtljWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H4HZCzepWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3HPfUwg9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IMFWKzdgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wXERhO3SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ZZde9OSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i56SlAPMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PO9K3dIQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fEfLdTYNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MYZQYfNcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CoWZU648Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3DBjQmAEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L0kHkI1RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nz29KgGOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JgBPCnpMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BQeWUvIEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F20IwmHfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0tMhSnYeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jQWW4xqxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GEoW78o3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tXnNKsj9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8qomlJIsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kFd4FK8KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GN0MJv1GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DRgqOrlcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2jyYQgCJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JiDdFNEDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rx5H7HQNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PBrzmm5CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XHNL36QoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DYF606vdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tbZVilPkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b2yeM3wsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EDPANqdXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZyCwHSYLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mLSoFGg4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kb78HR5AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JHoeDdlSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J2529DNqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f5IYYYCuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YBYc0i4DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eaSEq0fvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cHAzx7c3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DRYOTQmTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3TmYkpP7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SlhL3MZcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sM8gQ5itWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OGFoU9JDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kwRjZ3wiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dSzNFkDTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func abzCuTFuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kxdL6BXXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dzH5da3gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HwDmLb7gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fjm8BqbFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HRCxr526Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fp7xWhDkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IVckeP9AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EhHmNMc2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UcA6G6V2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QBSjY8yNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2TmR10fFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P3tRuKsrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ta2BzeUiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oX8SExReWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ii4oY6UhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f2icQZb5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iiM6AWBTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func euWnHiCzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yKmCYhMgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Fjw9W53Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AFSdvijXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UTJF4VIxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 01xTo5R7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SotrcvjXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GjXLxT7wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TxwiErjAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PYc4TTu5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lclfVUE1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BDIZ6weYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J5yn9xcEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ETQI3mtvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LMx6JIsDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func heQzFgb0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4naUbhduWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ExzhhXmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P7YeKELIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jx3SFUvyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gNdiBQQnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AXPpbLuEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xZ6sL5EeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5uA6S0bQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h2UmwvFPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I98mYxqNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AivJp8BOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ea66QNiHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3vkaglbUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pxtuiQl6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8NBfwmN1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7D6E44eJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cMdv9BeMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uAYTD6qTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A2HYh3nnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rl9ZbmbjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ViKLI7bEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NEJN96b5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r1wGfmGKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1CWRuGDOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HaMDChGjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aGWhoM7jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WqeE3fZpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yTEGWA3wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rsx9Fdb5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func drg8gUWiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QPKKu251Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8sgBBtdaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PVjTOB2LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OdX5ZxrxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZRW8ersiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func soFv3zdiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hV90sjcSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ri1Hkq8dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R9ZCqHyCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D7Y70EKCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EuooQovgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OHPUvT3EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UkJ44ADsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0qlsMWwSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KMPZmIgaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CfnGpO1kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KV0Dd96OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L4Sf6sSaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aZHCqKKmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZLAyzepYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8uAfy4VTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func URtszDbhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZzPR4dMTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MTaZNcTYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PBd73vhgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aUHIqxUzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4E6iHZghWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JjUWPdP6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mTwDR0lIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X1J9T6j3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDjEyXNDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AlZFLjcnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eIQGUvMyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EB1V35zcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3CyvxqciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CljVjcZ3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L9ZrBGldWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iqeVEIymWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tcGGfSRYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KwlaRbyMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JgIHK9OWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g0FuxRPzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gSwQnzGqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aRpX6Lt1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ypmAS6ZoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tsn5h64NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AGQAljfsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y3v1dRAQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3NfD1FtuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VVFLZJhhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wm0d8ChkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Fkw7u5kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qEOv2m5mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PPmAXbYKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lqkGxGkOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u6FGsf92Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EaNzXCCpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8e6Myt85Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vrUryTWCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 05IZ4qfSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WvSdjYeGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NsFpBEbgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E6fx3GPvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vVnodQoVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3YqxjILnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aMVRVPonWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NxO863YzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dn7e5JtjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func umh5cOu4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bDXXSN5MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8wRo1PV5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func psfrMan8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yzHQ08ReWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tfc7v36WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fcTJI9FyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X69HGX29Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TeOHHlSfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3WxWabgsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I6EkFz71Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mlaCZ7igWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0cu8RHaHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6QRhwDQxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ocoFihiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func msYTYuZlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RtyoflWdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fLIuw4G8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wjchQB9IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func djd5Ptb4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mrVUPk9hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DZzVuAeZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5XlqkjvFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MQHZGWfgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1r4dcFQKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5z8ik8wrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7gGjoDhsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lfFqFULsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I3FIv8cnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JM4iAGEzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xyl4DjlVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hFNG219PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1PhEVhZEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0hRIpKjYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gB7bjDP6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L1uQTVRnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lP5HyUV1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zD6pIAUgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d73MT9LBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Me9Mm8wFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ybpKOYjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2Zt7Yz9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8SiGEL5mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vgADkdpKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RXcufvvhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FOiVVXb1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vPehJgV8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LIqufDkoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x7GOS8FcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dHyOjuSYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vCuB8sszWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bA2K1KHfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r7DG8iaXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cXpwhZR2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 30LxrZOBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7BHJDYP9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wIHXMMMPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q6elU52eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vecEiA6aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZB9TB3lUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Nb7uKuQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 03hhKTIdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z1R9tJZHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dTJrdNXKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5FVtz2x9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TZyPf4cEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dqLfyAUSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2c9nfUW3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SAp44eekWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nYRStJp0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5XNYTwMQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wv25FIIaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8AEShnezWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ypgxqpC0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d1TEdNHFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fxzKuF8YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vI3zIqgdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jsPVMui8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5GIVX8ppWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h4WCvNw6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iu2jw7V0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rsGUwdCBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qzjvidU7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aIdCXkccWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uxlKgn2TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2uevbOMnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wcc6PZBaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func He7Ut1XLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wTBVvVlYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 81htFe6kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func naNXVEhvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BkDCUL3aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7xYXgh0IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m7krhVKLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fZ83KFDbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VMEz4ovHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nMIuLHOlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HHIRo0VeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D3nwmdubWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vq4kLG4dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kaMrBt60Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6mZwx6dFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UxDNzKPkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jpkij521Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C1cPr8UAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ivqemlbEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U9836t0tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7FSGWY1TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RBzKFceFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WwMIMi9pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hxy9d4OnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YPcXtO3LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MMXbJ2AKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WQtQLYhOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SlvNGnmwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m2XWYrCFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3kw6OkhqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jTA59Gq0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wZgtM5NtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GGwOLsSIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j7brSb1KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 74GVcQgDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Oy8UXIoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 559PFJB2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bqTVsXg8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 05d4rPKsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qydWJnvZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G2IFXjAFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9rb5E2dCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z93FlkSpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R5JzF96VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vhbB1aJIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0T7xizIHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nTLJmr6XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XMSozy3ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WkrkktegWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IZhQ1tZaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JxeZv1nYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VZACaiHAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bTehsmnyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YVA4xruBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KDS7ia8GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9o81x9UBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aVKYpq52Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TVBBxhEcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YCA5gCtvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LmzHtLaQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R4Rp5JxAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nIRa6nDuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DCv5qmYyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lbi2mlRvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iSVi4KqcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1eGW3RalWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d85WI7FlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9gbmBu7kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jaMH06M5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iSOyww7OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ScCHLpgPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uv1CPFQ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KrYT7qVmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ON83Rv6pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oAWptciDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 83qhMpzvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FKtNvct5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nivOKVneWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ct7jBBpiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uF3gksMMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1AwtwlN4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2UZqK0a6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BXjx6ICXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OKHMkrIfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q4NCLqG5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q3rJJwmhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wlXDbop1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7TwYQV4pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G1hULB6GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZefNtchqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KOPvCVjHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8QQfm58fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UKQ1p96DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ARLQpdcwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vye3IyR2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RI0gv8s6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func puepa87SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ifI6B5MpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func muGGBPqJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wO0DaRT5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lpCO0eMyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A6PUeI6pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TfTE7c0vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X2RiBAn9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6g6tQy3PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PGv2T9e1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mTCbsD9EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pggdDvjmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rddu5TGrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sEwSK3jhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 34hH3E1zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fr91Y4k1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LjUnfkFfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SSyQnulAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J9MHsVc1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qeq1NS3xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NiIKeTxDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func un8Rh0N1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ufKgohlMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5kudkhpEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func obP2pCs6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zIfJJLbKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0cuAkLdNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func efyQZi2oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X8wMIAP4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0c1QcoGWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mOOR2VCbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nvJKWJZoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func otA9jn1BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b5HCMgskWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MKeHN1zXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VFw5dezrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZUqYuE3VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9U4q6oc1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PDTnKtRSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z22JFPCBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1cevV3fRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BuMG7oqVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G53BQXUTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Xt1LteEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NBOR4RfmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OrPR34WKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cJuhDbsVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pYNPkpC2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5FcWT86kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EMfV7v8zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HtQBx6iqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ShA9C90Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func klxa1M8aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n4klAwYoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1XghfqLqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fSebgJYaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PIa954hcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aYeZzrjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1nA5WNKNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func quCj1PzsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S5yxP6gEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sMsm6aK8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eq3CFuPYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wwXl512kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wwA7KoRwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Mv1aLL4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jwID7stFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uLd5HpcAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A6mpdydXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9EatWp4ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 15GKmCrSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 37v7kmNPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Glscx6QyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ut5uO5aiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rTh6DVtJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lUfyVXefWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ncXhQlTWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rFem4qBjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ykOmQr9TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iQD0U2uyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oVz58PT5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0B2UYBrgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7iXo4KssWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PWxuAemfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gFB8BWN9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kkQe58AxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6gX0OE2TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qlVaXG6bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yi6NaXVCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kt7tutdaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ixVQuecXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sW27FoTaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cZIREHjvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tjpFWGxkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uzZQnKrZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GuR070OhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aYsSrlxsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5lqnmC6LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e0QiEuZEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GfOZmIRLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ReZpYXMXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wzvl2eqVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S5Hup6LdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kns5FfeWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P7AyZJTdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vuv6lbhyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WME4531EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aSaKCbMxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G6kjdElzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aweHPdN4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iHSNnk0CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oXyvq3wRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ks3I5L4IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iieJXejkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hSFAbTgvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EL4cShJUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C1XSUu9xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wvp4xwr3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yz3RlanzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArXlV71OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JBlcK2TxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UbGaN7xPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cFghpskIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EUYa20tbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uiRjQoxeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jQk3fRiRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U7OWBECvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U9dw6n2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z8ngrmzmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func De7UJwVIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZdjAr4duWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fDeePwsSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 827MEqsYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tOezAm6BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hqLvzz1aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 63fEtbxvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vTvZow8nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eLChwls2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PGurS8KNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q1tKbZMaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n4b02TUCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LXg11qDMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bPYkdZFFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CedfGlZBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0CMr4kisWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gqnaf8zwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OT5AmKLaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func whGiFnniWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rujMa1TKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 83MjFVO4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5uCGAEOSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mm6YvTz4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QUHPmFjFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pUCtpPoxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 02055vTUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AkevEMF4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M47Os84YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8b5rite0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sJQCJFX8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0HoM2I29Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZL5wICPvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g6SHrHxPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jXgTKr0NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MDrhsAqmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QYvBT5ysWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EmgnMCdoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TnR5wwmYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EciEBgbNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Lamz27eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y8uVWEvIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r6hQPe8AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 04nmLrSxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZwOYQHxyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4yoBmJuiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KuaGSlu9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Eukbbd2RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d7PddeLwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b0W9IVpsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sl87AGfLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fuaoLEJPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ns0KbVZZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YrNPLXYhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G1ae9B5FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HEP9D0n7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UMMbJekcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BB7N29OYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ncr681IvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 63EDMeHEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iuKfFdBfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H7E5up5iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rne9huWoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hY3d6jdzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KCW1poyMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func trbVWPkyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aMNDIl5TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 46TODZXMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3L2innyeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fzgD2PP2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AvyLovk7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aq1FDaI0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qOhJd9dZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SjgRVNZjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func flLSuGreWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wewr2NJOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ASMcprBjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aqsu8NhzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QRBOBqwTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZBeoOGXqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6qv1xEl1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sw9dndWfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eGG71KOLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BnP7gc4OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MNIGpN7RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6tnPgJ0fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dahkvskmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uYLc1OKfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 232YJo1qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eVjt63E9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s6p2sHLYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qBqNAiQqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fc26hrqIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ZX2eliJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Cvix7ZWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tmQFlXR9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oLPEzmHuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MjXRIOgVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FNAQdpDvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GbMyXRquWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cckkTxNtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fbcpXDitWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 076gd8QXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ISSFq53NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6pgn0Cb2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CJZ8fVeUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func evqtsPiOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MvbCHZwnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PoWlcc6nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0vvHxzQAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RE4gu0MlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kz6PEkCkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ll4wFQSNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FyhE8o0KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vQz0Y87DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cbKPNDwVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MbnqpdWrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LcMc9jyYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DreaN8m5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9yVVb7IAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C1493jzIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bS4H7yOsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RbvLcJ2JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 97GZnoYaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WCAysBzVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N9ouqNiSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8oGQp7jxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5PF0KijLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func phDwotbVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YygRtTPQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hy6VahLyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4y0wMxzTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3JBfaIsiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func it3V1F0mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EArWIcJTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0oG8dVQpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qRuVB3miWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0O4RKENdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8LH35BdIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oaDjuoV1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fzu3SwmFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uSDhTMo8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hC3i6akbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zczQjswfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1djirEFyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UXjTkoV3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0HmdD1nWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AtkKmj3DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JzASUnCxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cr8w1RBbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qoXYvIQbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wjx8aAngWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kY7diSUoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jq5FDndYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eEIpq9xGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BRFSCfflWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ucQCULjPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z3iTpjGNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3PVeN3w7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HFo83JdDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H2MEcBn4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ON8kr194Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3UNRK8gLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2LQeUL0vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vpH6WWQWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gELu81eEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aeXwPv2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XHD9mhxZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U7rTq7y8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ke7yZMMCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yjlH23sSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xOrTfKQbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DSx3HzBFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uRgjFnmUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 11PiS38CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8G0iypIaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E483FVHYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5L4uLxIAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func meADpUfJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JQ6DtzWgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bmW0yENfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jwzul0jQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ekbh9jyRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pN6XY1I3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FO7PniaoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i1gt1B7XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ePnw6VVqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UKswg7hjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3pO3QyIGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ionUDrzDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lPeWM5ICWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O9P9QO5MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WNmWAiuQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MTgj4zyjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FfYvs4zJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 898CmTlzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rwNEdcLJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AZfxkf4AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 20FkgW0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jNprCH5DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ABv1YqwSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j9c2vUifWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3qPUJJ6FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aWiK06ePWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twdqTjH7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LsaDqkuiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QySJPcDuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZXwXGhBOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bqr4aAwQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z5ZOsdt2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MfmcEPS8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aKKfJBLMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oMUTlSnnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9xH952hbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eU0aSMNJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qT6u3RCSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WGokYwu0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func usYD3iGJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GcTIGuRPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q4Jc3dD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IyQcHvYSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pKNr8guSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fho5CNpyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7J1VrFgiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h2gi1sqxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CmQs3RjyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a0IAYpAwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E9JqGnPiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Sw5rjlwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yMhZcOa3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func anZO6aEVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DiaJM7iMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Saop4uLoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v7tDBmiqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cg1ZOVc9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lBi0SqDHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func prshbuLmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nIOo8oNCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ShNP3lFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func giiarFA0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func beHU6BQjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fhGoxOgoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kIUtQt1pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YSn0vqNDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PkC1MKCXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BZwCmfAIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vOlcek7SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVhLeH1QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pieHoe2DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TyudGszrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2IuKRKKbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hWPcJlXAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TJRcRaXWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aJygHD1VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l8J7iKdxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mYVJU687Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func puTQo9ZEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z937JYgfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZdYt6Pb7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TFSu2Dz5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pLhstUasWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fj8KdTuhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kBAm0fpMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pnPyOB6TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UM2xA4X8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jB30YEHeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ca8Y2V1zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DKnU1Ax9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 15ieHvSGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nIKteQV5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5moXxC9vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FYSvqG6VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g1EUhDuiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gbHQjhMOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CjdL0UymWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z5FR3V9PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dOqx1KitWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DTxjz63ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LGRqQwmPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func howoJzBrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HtAbE4g3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zoTzFLRpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GdCbgf3hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8tAeN9KMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OJeiUALPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BIlrn957Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1R1xkm4TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i1AisT4BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qnaZM1oDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8sssY1Q6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w1JP5TToWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FhhjZnigWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4TXfv66OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xm6Tppt4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ikn2tp6CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F3zpPNKlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k5C4I4pOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eWFr0E5yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YalWFDuwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sPCYQOqhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TEDSI1mAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 42yt9KicWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kO6zO2VCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fr0F7xczWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NINGKATuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NhdJNHRpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FqKrUKFqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1vYnTrkxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wr0ffKvmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ME8vFevqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B2fi0MN6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ZWkVIndWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qTJtclBeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X929jzOQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fstM4uFsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M2CGViTvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hXTYppH8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZxT22PwTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xgD7M50TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6lhC4nATWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GRK8luAvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yfW5qgwuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z9D1J5XdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4VTb7gl8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3uxQuIc0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UYyh2h49Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jLUm9JVzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5aRWpOvWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uDdyiGLAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e54Vk8iIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NjBsfNyHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mn1zk4l6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ovOGIoo0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nahzAIsLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mUXR2BZSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kIfKxwyUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func woNljm29Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KtXnVSwnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NKxYXoe2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u8Cj6pmrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SLvcihkPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QKDh6JUcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wp8Hyym1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JNkRLXc6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wASTrvvwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u8eMONu4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JI9kls8VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wFyE8VXzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YgHiUjqWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cS4Irf0XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D6XM0NQMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FxprjqoFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nNarO7POWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 52ByqnIxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U9jGv7REWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 854egBijWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NYCPp342Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5jR5s0D3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5vrPn9JVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ik48gfTyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8opsR2F1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qg6Oh1AzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qDeI2Jn4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5lPwCQREWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func opBW8j3gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0f1WrGLhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QXoQ8jNGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 32pFVokEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func czNhjbWUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o4Acg1lvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nYgIVbRKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n2lxo4VqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fjAmKADQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PHyDNhBIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8zqO6wIzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CZlISeu3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bEPPTc7xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KWaf0EmBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func flBypiIFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EuoUNffgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2kZzPfVdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FaagRkaTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sFERiu6oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OF98jlIsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KWRi4Wr4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func szCiMSdSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pN2XVkCJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RJDUytpvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6RFmmshmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7znlqZPjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b5CtIPERWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uAluDl1oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ElqNsDq9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZbUhpNxvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CGFW4bFEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RfTy3kwWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LfMYCC5YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1VIS6K1JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DbFSW6ZwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LecYVnnCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func snAA66fjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func irKgjemUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2AwYozVZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mxw71Y3CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iG5MC2IMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ytsQordWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c1Y3ASI0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JqNb8e9RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZjIASdswWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zmfDMohqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LVfWGd54Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E5bmDNTvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QvS1nNJyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ZJL1eOrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CMtcB3hqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4TuaBowAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8vytShD9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9bYxgsCLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZIW5ml3ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WghNhdaeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gv4L3K17Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2d2pCiILWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nqJhJc6RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KoAo75rTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KZspxt8AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func va72cT7rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TjveYxcLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vuX7KQWYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JfO4IQtDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AfaN2Xa3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eAJLF6qwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V8sYkFlEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func APNa1vHjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 16rbUUC8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LHcL0h2bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nTmk7ZjnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lk3LNjzeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ZYTerKuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLCHKovSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XZrPfLOXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TF19ptotWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gQ8astwCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OKZc8EIZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gv189EYoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dTmdZsyQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QUaJ2yFcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GVw0a4NSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YitKcZPbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bgxc6AggWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dR4hIlCOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n8qjpAW7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uTtYUaTdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oBgw0i73Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1YeLlIdOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 32rwxFwXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TgsCPN8DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lXCs6A6OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qMDOCKVHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S5uCS5ekWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8uIP2pZ2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yoQODwIuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ibG6McjnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x7D4MqwhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5WbH5wy9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xcHrXbfhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lWw4z22XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func etUjC0g4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jkKFdfAbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jwxRki7bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Opag7FWOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func niZqdPTJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hb9wq5paWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RcPUNehPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zORXp1zSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IymRa8FPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tK6iLprpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LE2biTpzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p2UyepvkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QiweCH1vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gn2ofnrdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JRI6Vc62Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5fjlxX9BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4wWcugecWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Is4QjUfCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PM0r5CxvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mxAXhK62Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fdSooAX0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w0Dli7DMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9OtUOgJCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xixcHldfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jROtzn72Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cbus17ESWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LMcuMHghWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hBo8nbdOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pvd1voKlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Ixx23E4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z4Mr1H8UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kVjucT2eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DXkpwtyrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q8EvyjABWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Uc2HdeqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JvuH3DeFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tvqvtYI0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0F7oHJSlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IfOKRYL5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OLzFL4zdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XulY47EMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uPavNMThWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VQVYLMoXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2P1KCRGvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xMKiPZ9jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1CmjKX9AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ynlQZRfEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WQNkN1HbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dq3HGGB7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J2tCTG2nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lOxQl26tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cOYCerYgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RRwUL3nIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zs32WQlIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XAcW7FMZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2dnSAe2vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MzESoSAbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NZd0Aa0TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MY8uFtZsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1RgpF1LhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JGNZClBpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cZKadyioWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PfvCC1xWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XXAfoyGsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HmKaCfycWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BjBLLtELWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rwmuQpjyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b0MWIAArWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S6b30xMKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k0syTHH2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oV1PbxMwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UbPvkKCXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XlQMtYYCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FMRqrn2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R6A9L3mcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pp8wYyAyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BbITj42hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qDh4JpwTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9MDdufhwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JxdSVbczWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fuHtKqerWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bmBMkhv1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f4UGS8VPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ME3LJsd2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JnoeaKgZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0vp8JgHAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1HyHHZrZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iFLkyRkhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sAWicefRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OpoiAtBgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EvP9GQcTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YHHJO1OGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EW06As5aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QRuSdzq7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 91yxviPWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wWc21phcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bgbWvUugWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wg4WM9IfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xz8YsrZ3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tCbohKKfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zJywufNdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mn2tZVmzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TgFyZTL7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QX510YkIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9DCz9YgHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HKOljPPcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LZKDKFkSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GMrbYU3UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HuqHruJJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a9FkYeHuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 64opb8jqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 52KWO7NrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PUUa0gkKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e9MwwRbnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iAB2Z1ZRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xVlbVmDRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rFR7XAIxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 32qFHNddWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HuxcafHXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l00twH9bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mPLU2soHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iLDx2QH3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RbzMVkb8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3aXXVHToWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zJpNpPKfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lAW4TP9sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8zKeItNEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sSP0YaQHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VJq5oNUPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KtfVKYnjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jLk9DvyWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N6iirSikWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RI01qNGhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7zTL3yrjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Hs355OgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 62T83h2gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U2hktIZxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PQUvMU1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cqEWaKPjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hNKAmcWlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uXYEgFx6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N158UROOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yPIGAizbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vUqk4TuSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QfruaYz6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iMt9dNfxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bPg3OCxMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cnZMmUXsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HMJ36BUUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 45jkiesrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9lQJFUMcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F4t5dGw3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DBJgQwaiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1FCSDdFrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XRs0WmZmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qnw3u4jVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0KtuJpGLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func efbMeeE4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SFBs4oTlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N0yTR9LrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nm71fYInWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eF0p1EjqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mYEydJcsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ftMdqKhQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c3JM4BFwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ht3v4hsqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WMfm169gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MS3vWtHdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UWiv44iAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V6gh4kBSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YkeZmQC9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func anMT38nkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KHyFO9P9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ivqdxGShWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BhjF6iv7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tUKztlIQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ycVvQwjrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r6wYUvxtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RPd95sxxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N1iJS04AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func by8ZuweIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3XIVAHKsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hOy3eiu4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v8N2VaO0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TOcxFii0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0kmNvHZJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YYYRcEvZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u5MX9EQJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ajoyhvYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NnEIWLYeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2i5Hti1lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u27jWwrAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zBdqDSpTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AcrvXaRaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MJLGFvMdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func APWq2PRnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Pjk30gPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qvhOpwfXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FQHwEbAsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u9FC9utdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tMdSAJIYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kOF07EpBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UIZDaN2HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a5JWtZKNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7SuLqW7qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KkUwexLDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func og4btpg3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QrjXtXkiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oUYWUx8VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iQYFdO5OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BO4HulOcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E3yBm5MRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gDrozQyHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jKwjOnCrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nr9IC4PgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func igRylvkeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FYtEMp9QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ip57R6M6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F2zKsa6KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r8TTKvnVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JtUV4TsGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ky6RQ34NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func klUdnpQyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func moN8es4DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q6yk3BySWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8JPpt8BaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i2ousF8kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bHD3DfgGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ls6R0RVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rP7f5ZXDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M73xp9BPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9rIs9AR4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LXcVu0xtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WK0M1yg4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6P9fYcLeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bPOmwpQVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FkI10fwOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kIxXsHqrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4y2wfTugWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bhg6EdEFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lrIzUzj7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fcIaupuXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g4lkZCCVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hevRC5I2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7bSHSTbfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nh3eCOyjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3mflYnSOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nwVWCPDKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func frvfnps7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xqovL9W7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sk5lpriyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XdzMq1oqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pdxmMn24Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SrfJXYcfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YXZjapXDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WdhQzflWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YulFpLJFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ql21M3kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dMdwkJdzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eatu3zy1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Te5qPIbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X7uAw7U0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8COSnO3GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MPJRrrXvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1euJlzFAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O0RhmvwVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func InLMSIfIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PVO7iwnHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oHNBXnAyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cT2qoloJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wxGCueeRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JUGHv32lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GStM0wdEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jwzUZEmVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bDe9OgPIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sGgcgplLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BtxYmXppWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oC5bR8vjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EPG5LRE7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JyODpsjFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nRPSlDCYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cP6YODN5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zYlQHluVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func klOva1NTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bafl9aHjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zdLWKmepWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArnIl4ZoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b1JpwHzMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PopMyGPaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NPPh8ozsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func akewELgTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func suDVZ1hgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ffue7czyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GxVIojzIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NYD8vyswWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HUCRgmdhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bklOyDv3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lFmGHuvoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SPj0bVmlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1h6WLvouWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S5f0mUAmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dBXGQzdSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G9TgwBhmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oszze1vpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9N1EDSv8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nmDAgPYvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xbdSITXpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L9xKvbttWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func egUDUBJhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nhFLS2NxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YLGeyGQyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NmvgJehwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cOoU6O12Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mGUXYL6nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BS1kTMWDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tc7yzlIfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KJQN8QBAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KQFj2sHqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kteOlskvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vTZTzJtsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EbsKh2PpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8zwBbIq3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dEW45hNiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bNg7swrGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dLNJTmNFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RkrEgG1iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5WjWQl7YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sXWPpeZhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cda3S40RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jnTRmEh7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b9zqhesgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cww4sQotWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gFACRjBZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DeOofoJDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uPsMOyX1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j5L5hfdnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8SPYCxwWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bD8d2wvKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gMvUGJtXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z0QgIfJIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l5EzhxT4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kQBPsBg6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qqIwuydsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZCnjUQl0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5OGaGsgvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N9HDXkO4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bQfHwXbCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8mmm8BMXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oKvHRiYiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dHcIizKuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cyLaM44QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FMk9kut5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dkv2WdgAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y7GyBUlTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8lhZ84GTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8CsSETVEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Wr2gg0wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mpI2PO2MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1RIbTC6xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6prReXqlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ieuuECYaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CYGMFBjHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7WUxNMj0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N4NhTwvpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FzUUir8nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6FKdWERtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wKhPvA8pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UE0JGUQSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBrNpgTCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0AlpiaVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WMTif7iTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RtUgyfdZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZwChJH1gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P7jHWqQZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func etQcORSMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Tk9M4PNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9aIO7fxKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YMQFvFvlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nonfsj0ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zC1KYRjfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func opiviuENWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 03zxnyxbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kX9yu33HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ax67aUkpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ai0XxoC5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pA9hSP9CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eqBTIxOoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WtFsxp6gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6XSdhxRRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6cbwaqrTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6CEclaYYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9CpMivEZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iSEugO4JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QFQQ2lFYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mgan48w7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func syfThKZNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YaGBNaUCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6yh2W46CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l3speEaLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wYmib293Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hws8VbO7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QxfdLfaGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tWzl245RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8EPCmhwkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KM63z0aqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func npOnuD75Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cbpvMCEMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JWCjdzmmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zv8QjgTBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qHYSsHw7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8OM0cOFRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4hvfNVEJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L7GmbTrLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a4XsUwQsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cS3INOSPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K2ueRWJFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0oFpiMGGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cR08IkNFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uqbc2pyxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r98skjStWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func biufixDjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lHDj4cEwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ReerQGJsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ptDhz3CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LYCKDUo0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CFHlxoLPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3fxU1JjlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QK54VpBsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OJYSCoeCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TtDBxlgDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FM8tiaooWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ZV6jz4xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tch3gFArWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GBoqKecJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0dTKeSIEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bd5CJpnAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E9FZdcCSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zdc6ym1JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rjgUbCCkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wPahoZeiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IA6RnR5iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gtMu1n3XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v0UftFvXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OtdnvW63Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ro6ZGSnNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RVbO0V4XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QiFd6IvmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C8g4PblIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CG10txRNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OEFCHbo4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3grRvxLNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D86ze8vDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JFTpPkh9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5tTXTToDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XH7KQeJpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t2ieSzWyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BwyGhvVHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FrvlAFsTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func auQ7HMaJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aivp7n9jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6mjYS18SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2TYiFRfnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wmkygOFHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RYJLWA8CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9JqrowUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IUdn5yyaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QlawgnbQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UVbfga1DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3sqvbKr9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CDJ7DmA7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0mBjqgWqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LGAyCop5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dL3x1k8RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tlZBJazSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OojOa4ftWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3vjDfHGwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wpvJIcOcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aaljqQJzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WMWvpOirWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jJTtOFgjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xf6pPjlPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xuHRYavbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ccCNcMYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X2EueHPxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j7xZ52znWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 96TizoShWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KR7R2SbtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5SpiNrYhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cWy7zSIXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WW5aa4ajWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kri5NxCRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Ad3Y5umWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZZ0K4UeWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CxsFlo85Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J9179blBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z9xHVJLEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BXIu74OJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lx62fO5rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FoH3SdqGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FP7RnjhDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V0FpNP7EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0oohHLStWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3xbftvaxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SQ9WAvlBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 02yeIP7YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KcFWune0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Iv7gQMnnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 94NDNdH9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6YMVzt4KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xX4emtCUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4fiVuA9wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qZb4lbSgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2xkErJm5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IIf7BcM6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3jAuRTDJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C59U6cljWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PO3Ty455Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OenSm2a3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fr4WRskQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qznXM8cjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B3BtrGfTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hQGhvfNLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MIaeobMQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5jQMzj3OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZkclF6cjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yS5RBJd4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zyhBXj2IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oYfZqLD0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1qGawcriWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func prIa4e97Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BSsbrWr8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lKaXnAodWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aInE8vYBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NSPSAJAVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mNGThAg7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m8QXmTpLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CucAsiIBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zIjFCWKEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BkHBdIMUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4f8sXcpTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jjqrug8cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kvOkxqeyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WWcYtkYhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uoS0DWkvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IuPUJzmZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fxS5VeKzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6OoleLTHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hGDupWzLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LS1Y6EKhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sXZfGbaWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dGHQljCLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n2Mq5YzIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pb1ZHqt6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w8brK9I7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dn6tMBqQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LElEamSrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PQq1aeQyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YmaciYH5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bl2PcB0WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6JGdVO6uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OSK4bmNVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YYdS0IHUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I8K6GWhYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xlP3z33YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VdsQYnheWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UMpd8PANWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D6kblWCAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YZwgJ6rKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wKekEGCYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EpbvGzuoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PsYVH2EDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BNKrRvVqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WtfIifZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KBdSz8B4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SSjBT5aUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zEThZ7kkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U5ddS34dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func neMX1KxzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OKEygYFKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lmmbf2raWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vmva9mniWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fZ759ZQWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Q3jYGBDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cvOECik0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g0kzpHBfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t0Z984tFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZAEWCcssWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GUoaBbeGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hTEO8AnWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bbIk7diFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oqZ0KBRUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TQkIJuczWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zwzEBsdrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tKamictxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BDo2tgFAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DG5v44zwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func baae01QiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ZzenSILWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2OVLSywuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i1Ubaa4gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FfV8uyFkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O3GPfVliWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f7ATUjDJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zGXsyEceWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5WCb4wRnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zBnuLthbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LcB2HMN2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SIjHAgrYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mcMvFhq8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LJLO7hAXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d2cqXYGgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pEgz4gH8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qb5uFobyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H4mjW04GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uKoCwPzeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q3dfmyy3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3SX1amSGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FsO5LaOnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 46BxGTaGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GiRGTH8jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yPPD8NW4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b93J14NXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5H9g6Q7AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2AqnNiMmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RkvHdjcwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDV8SXuuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cfm95htFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jtCl8UFdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Ig1JRdTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NMc5Os6mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eRDXrcuuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3q2l7IpJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func quoTHqK1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hI8kZqxiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sClrvPAcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func akbaaVMZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T4hTUhMwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4DsmZaGOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qa9a7UDCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uOqWNNQqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RbatQKFlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M2UVUr2HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cv4hNcpgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oMxpdAf6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I19e7XPKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kBoOtA9xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JslOhvAaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CscpZdzOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6soMow5UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8CQplqAEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YIpFdPPtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jecTtPVZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YNReOQ73Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O4sXJ7n4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zDZUphIiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GumxZ0PPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aJNfWuQcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vUmxHx9AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MHST2rjkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b5ERcPiYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ltpYhBaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eNeQCco3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Byj4BfwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tsi2NDH4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5rJaqXnLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I6rKOv0UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rSi1nwFvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2wfe6svqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1BVoFrq0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h4RseYLhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HeRA01kzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g9lN2MKgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MYpbRbMEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OmBewCCdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Wd4T8UvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W391je9eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jcsO6DeFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o4MZBPzNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9dBhbK0nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wTlRIo5cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fEiiFZK9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eWD3Wm9iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AMv4fqUhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iTfqHsfXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wb8TI6b1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oTarJ91xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gTYBi45dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sNHgrX3kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 748dRBAmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YQhB0q7QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VjLcvbfkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CP2WF2H2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func amzcQcNiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gsDwAhIjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x0COSPaKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5XuQ4XtSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f58H1MQ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M7kuowzPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PIrjNRreWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WkVEQhqlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBstBkI8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qMJLPreAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xfkalYH2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QMrCms1VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5W3KaxGSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r5XekkFoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UBI9bN5pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8xvbkRZHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HxsmqUhiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tvvdX6dhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wJ0HwjawWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nxz96MEmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fZv64j1YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KyZtfz1TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ihnEYa4VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p7jqjCLfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JMsaF1IxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WUtQMn2xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NqMArMhpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fNfQP4DVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E60UfcQDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NHyT511QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JcWnbXHwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KLf2KV3KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IYw2VigOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fb7BvFL4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FI7ZuTQIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1EwBoqAfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FZAoVcwDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kvlYTE1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MEb9YgNcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vQsFkK6PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WC2PPbT2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e8jHSQsxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t8bWZyuyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func avsTj4DPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mHQtjNFNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BuPuIffcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l5WECFTbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NNOTx4qUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rnONnvlTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mD1RRtuIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JrZc1nMgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cwxc7vlwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2WKUG7ArWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xHhiKLxEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TYzfVdJNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 36n8lytfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hPTQhvR5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uy0mFwKmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func akB6mh4GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YOcXi5C1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 54XWAseiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vjHZTDPtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oMCuQz3VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uQneW2doWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8SqcZ4jIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DHSZrCU0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uAXcJjvoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func miXFXqqFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VwIJKe5JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yo8yS1dMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EFGKveHYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JzWl1Lb2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V3ZKvDgcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LdVzZ1sHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6LKL97yzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GxKmZXZxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1gSuCO5wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tPaT0sldWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1nDNsfHuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kyYUkUalWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xByAfZcjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XRE9aDqlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iVTEPTeaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s6NRrPYgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pLDp2N9AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func raPuLupSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gwpaobApWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zql0iY3NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func doYmj1YOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KyibSAiwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5MXZV3O6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BFSj6scjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HNOPqn0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gdsyLjmAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eXYbHQpxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gDsBaws2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MSeTIJfDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5AO31t9fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zf4DRzo5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dF1IyJscWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r15RG5QbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pyYjteuAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cjHls8OBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QMm0ILKnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FLOxgTfHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XAZ9IbhYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q8NHgGGiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2eORF1zFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0blZ40EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V3KWgV6IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zGs7FEJ4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OTgoPvdaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UylduhwiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PviNxPLhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V2u87XHzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0dCQha20Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LWOVkSCiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EM8ARgM3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IEk9CMkSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AXAxWEHXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CNiTKpPWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kPWq3MxAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z4zRZVPuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JyoghxFyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wuYOqlpdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func emt5P8GgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X5m5hsqTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UDrWssDGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ya8uxGd2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QWVRwk34Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wfE4HlWWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p0sNM6ouWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bewdDigZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ng4HPi5aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jLz8WUvgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pvCUUwgBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OuHzPv6mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KatiYHV5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TRpdNecoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YfMM1l0LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4C3VwX5ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sPkkhbv4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mZOWThrAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gPXNaS7aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z66R1RzKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kr1fP4AxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LevIhI0dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4QTqAxZyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wWnMTp8mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SfPPbfJMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d9zlDPGuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qMVKXNnJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2VuWnsZ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func URBihdtRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GKXJzYqRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JpBse57QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LqazZcOXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GFvFEmp4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 83sn6HYGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bBQaK8YOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func meHetoQCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RT9sFkifWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VdkXIyjbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sG5LDzXbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3j6HOaKlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JdeJTaaHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f873QQomWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1sH9J2fOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uME7vvzyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rYbmdMdXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SDbpmecCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func liR1xLXHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aNPLkJKqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iTrai45xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func smNzF4BZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLEcpPEvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CiPGaXKoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dM5ZkTbXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L1j5riIxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cnNZIEhbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YwTTtep0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hUuRHj1MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func falNJCB1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mVmZ0V1WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DZDfLzmUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i5RaPT6mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PiGtEk52Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MIDLeXJuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u8Pk3NAqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f5wYg2nlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7LdZkKBOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZUGxg4QQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0elAu3zeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AnGNs2wrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VAsdakD6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MLHNHbcsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HNsKNjXWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7f7W5xKyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sZxk8g9ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Gmm2nw1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7e7uPc3VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NTCDeuN6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DRVqX7n1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pEFAm5csWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

