package pl.jermey.jniplayground

import android.app.Application

import pl.jermey.externallibrary.NativeModule

/**
 * Created by Karol Celebi on 01.03.2018.
 */

class App : Application() {
    override fun onCreate() {
        super.onCreate()
        NativeModule.install(this)
    }
}
